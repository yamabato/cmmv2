#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gencode.h"
#include "symbol.h"

CodeBlock *connect_code_block(CodeBlock *blk1, CodeBlock *blk2) {
  if (blk1->head == NULL) { return blk2; }
  if (blk2->head == NULL) { return blk1; }

  blk1->next = blk2;
  return blk1;
}

void connect_code(CodeBlock *blk, Code *code) {
  if (blk->tail == NULL) {
    blk->head = blk->tail = code;
  } else {
    code->prev = blk->tail;
    blk->tail->next = code;
    blk->tail = code;
  }
}

Code *new_code(Instr instr, int l, int a) {
  Code *c = (Code *)malloc(sizeof(Code));
  c->instr = instr;
  c->lvl_diff = l;
  c->arg = a;
  c->prev = c->next = NULL;
  return c;
}

void append_code(CodeBlock *blk, Node *node, SymbolTable *tbl) {
  NodeKind kind;
  int n, opr_n;
  int ok;
  Symbol *sym;

  if (node == NULL) { return; }

  kind = node->kind;
  switch (kind) {
    case NK_INT:
      connect_code(blk, new_code(INS_LIT, 0, node->ival));
      break;
    case NK_ID:
      ok = search_symbol(tbl, node->cval, &sym);
      // ok!=0ならエラー対応(ok>0の場合は、オフセット不明)
      connect_code(blk, new_code(INS_LOD, 0, sym->offset));
      break;
    case NK_VAR:
      n = 0;
      for (Node *id=node->ids; id!=NULL; id=id->next) {
        sym = append_symbol(tbl, id->cval, SK_VAR);
        sym->offset = blk->var_count;
        blk->var_count++;
        n++;
      }
      if (n > 0) {
        connect_code(blk, new_code(INS_INT, 0, n));
      }
      break;
    case NK_ASSIGN:
      append_code(blk, node->right, tbl);
      ok = search_symbol(tbl, node->left->cval, &sym);
      // ok = 0ならその関数内 -1は未定義
      connect_code(blk, new_code(INS_STO, 0, sym->offset));
      break;
    case NK_ADD:
    case NK_MUL:
      append_code(blk, node->left, tbl);
      append_code(blk, node->right, tbl);

      opr_n = 7; // 未使用
      if (kind == NK_ADD) { opr_n = 2; }
      else if (kind == NK_MUL) { opr_n = 4; }
      connect_code(blk, new_code(INS_OPR, 0, opr_n));
      break;
    case NK_RETURN:
      append_code(blk, node->right, tbl);
      if (node->right == NULL) {
        connect_code(blk, new_code(INS_RET, 0, 0));
      } else {
        connect_code(blk, new_code(INS_RET, 0, 1));
      }
      break;
    case NK_WRITE:
      append_code(blk, node->right, tbl);
      connect_code(blk, new_code(INS_CSP, 0, 1));
      break;
    case NK_WRITELN:
      connect_code(blk, new_code(INS_CSP, 0, 2));
      break;
    default:
      break;
  }
}

CodeBlock *gen_func_code_block(Node *node, SymbolTable *tbl, int lbl) {
  CodeBlock *blk;
  SymbolTable *ftbl;
  int sym_ld;
  Symbol *sym;
  int i;

  sym_ld = search_symbol(tbl, node->cval, NULL);
  if (sym_ld > 0) {
    printf("error\n");
    exit(1);
  }

  blk = (CodeBlock *)malloc(sizeof(CodeBlock));
  blk->name = strdup(node->cval);
  blk->head = blk->tail = NULL;
  blk->param_count = 0;
  blk->var_count = 3;
  blk->next = NULL;
  blk->label_n = lbl;

  ftbl = new_symbol_table(tbl);


  // funcのスキャン
  for (Node *n=node->body->stmts; n!=NULL; n=n->next) {
    if (n->kind == NK_FUNC) {
      sym = append_symbol(ftbl, n->cval, SK_FUNC);
      sym->label = ++(blk->label_n);
    }
  }

  search_symbol(tbl, node->cval, &sym);
  connect_code(blk, new_code(INS_LAB, 0, sym->label));

  i = 0;
  for (Node *p=node->params; p!=NULL; p=p->next) {
    sym = append_symbol(ftbl, p->cval, SK_VAR);
    sym->offset = (i++) - node->ival;
    blk->param_count++;
  }

  for (Node *stmt=node->body->stmts; stmt!=NULL; stmt=stmt->next) {
    append_code(blk, stmt, ftbl);
  }

  return blk;
}

CodeBlock *gen_code_blocks(Node *node, SymbolTable *tbl) {
  CodeBlock *fb = NULL;
  CodeBlock *blk = NULL;
  Symbol *sym;

  blk = (CodeBlock *)malloc(sizeof(CodeBlock));
  blk->head = blk->tail = NULL;
  blk->param_count = blk->var_count = 0;
  blk->next = NULL;
  blk->label_n = 0;

  if (tbl == NULL) {
    tbl = new_symbol_table(NULL);
  }

  // 関数をスキャン
  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind == NK_FUNC) {
      sym = append_symbol(tbl, n->cval, SK_FUNC);
      sym->label = ++(blk->label_n);
    }
  }

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind != NK_FUNC) {
      append_code(blk, n, tbl);
    }
  }

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind==NK_FUNC && strcmp(n->cval, "main")==0) {
      fb = gen_func_code_block(n, tbl, blk->label_n);
      blk = connect_code_block(blk, fb);
      blk->label_n = fb->label_n;
      break;
    }
  }
  connect_code(blk, new_code(INS_OPR, 0, 0));

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind==NK_FUNC && strcmp(n->cval, "main")!=0) {
      fb = gen_func_code_block(n, tbl, blk->label_n);
      blk = connect_code_block(blk, fb);
      blk->label_n = fb->label_n;
    }
  }

  return blk;
}

int write_out_code(CodeBlock *blk, const char *fname) {
  FILE *fp;

  fp = fopen(fname, "w");
  if (fp == NULL) {
    return -1;
  }

  for (CodeBlock *b=blk; b!=NULL; b=b->next) {
    for (Code *c=b->head; c!=NULL; c=c->next) {
      fprintf(fp, "( %s, %d, %d )\n", INSTR_NAME[c->instr], c->lvl_diff, c->arg);
    }
  }

  pclose(fp);

  return 0;
}
