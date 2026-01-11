#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gencode.h"
#include "symbol.h"

CodeBlock *connect_code_block(CodeBlock *blk1, CodeBlock *blk2) {
  if (blk1 == NULL) { return blk2; }
  if (blk2 == NULL) { return blk1; }

  blk1->next = blk2;
  return blk1;
}

void connect_code(CodeBlock *blk, Code *code) {
  if (blk->tail == NULL) {
    blk->head = blk->tail = code;
  } else {
    blk->tail->next = code;
    code->prev = blk->tail;
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

  if (node == NULL) { return; }

  kind = node->kind;
  switch (kind) {
    case NK_RETURN:
      append_code(blk, node->right, tbl);
      if (node->right == NULL) {
        connect_code(blk, new_code(INS_RET, 0, 0));
      } else {
        connect_code(blk, new_code(INS_RET, 0, 1));
      }
      break;
    default:
      break;
  }
}

CodeBlock *gen_func_code_block(Node *node, SymbolTable *tbl) {
  CodeBlock *blk;
  SymbolTable *ftbl;
  int sym_ld;

  sym_ld = search_symbol(tbl, node->cval, NULL);
  if (sym_ld == 0) {
    printf("error\n");
    exit(1);
  }
  append_symbol(tbl, node->cval, SK_FUNC);

  blk = (CodeBlock *)malloc(sizeof(CodeBlock));
  blk->name = strdup(node->cval);
  blk->head = blk->tail = NULL;
  blk->param_count = blk->var_count = 0;
  blk->next = NULL;

  ftbl = new_symbol_table(tbl);

  for (Node *stmt=node->body->stmts; stmt!=NULL; stmt=stmt->next) {
    append_code(blk, stmt, ftbl);
  }

  return blk;
}

CodeBlock *gen_code_blocks(Node *node, SymbolTable *tbl) {
  CodeBlock *fb;
  CodeBlock *blk;

  blk = (CodeBlock *)malloc(sizeof(CodeBlock));
  blk->head = blk->tail = NULL;
  blk->param_count = blk->var_count = 0;
  blk->next = NULL;

  if (tbl == NULL) {
    tbl = new_symbol_table(NULL);
  }

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind != NK_FUNC) {
      append_code(blk, n, tbl);
    }
  }

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind==NK_FUNC && strcmp(n->cval, "main")==0) {
      fb = gen_func_code_block(n, tbl);
      blk = connect_code_block(blk, fb);
      break;
    }
  }
  connect_code(blk, new_code(INS_OPR, 0, 0));

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind==NK_FUNC && strcmp(n->cval, "main")!=0) {
      fb = gen_func_code_block(n, tbl);
      blk = connect_code_block(blk, fb);
    }
  }

  return blk;
}
