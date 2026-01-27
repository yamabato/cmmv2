#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gencode.h"
#include "symbol.h"

char *INSTR_NAME[] = {
  "LOD",
  "LIT",
  "STO",
  "OPR",
  "INT",
  "JMP",
  "JPC",
  "CAL",
  "CSP",
  "LAB",
  "RET",
};

CodeBlock *connect_code_block(CodeBlock *blk1, CodeBlock *blk2) {
  CodeBlock *tail;

  if (blk1->head == NULL) { return blk2; }
  if (blk2->head == NULL) { return blk1; }

  for (tail=blk1; tail->next!=NULL; tail=tail->next);
  tail->next = blk2;
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

void set_loop_label(CodeBlock *blk, int head_lbl, int tail_lbl) {
  LoopLbl *lp_head, *lp_tail;

  lp_head = (LoopLbl *)malloc(sizeof(LoopLbl));
  lp_tail = (LoopLbl *)malloc(sizeof(LoopLbl));
  lp_head->label = head_lbl;
  lp_tail->label = tail_lbl;
  lp_head->next = blk->lp_head;
  blk->lp_head = lp_head;
  lp_tail->next = blk->lp_tail;
  blk->lp_tail = lp_tail;
}

void unset_loop_label(CodeBlock *blk) {
  LoopLbl *lp_head, *lp_tail;
  lp_head = blk->lp_head;
  lp_tail = blk->lp_tail;

  blk->lp_head = blk->lp_head->next;
  blk->lp_tail = blk->lp_tail->next;

  free(lp_head);
  free(lp_tail);
}

void append_code(CodeBlock *blk, Node *node, SymbolTable *tbl) {
  NodeKind kind;
  char *name;
  int opr_n;
  int tmp_id;
  int tmp1_id, tmp2_id;
  int iflbl, elselbl;
  int head_lbl, tail_lbl;
  int ok;
  Goto *gt = NULL;
  Symbol *sym;

  if (node == NULL) { return; }

  kind = node->kind;
  switch (kind) {
    case NK_INT:
      connect_code(blk, new_code(INS_LIT, 0, node->ival));
      break;
    case NK_ID:
      ok = search_symbol(tbl, node->cval, &sym);
      if (ok != 0) {
        printf("Err id!!\n");
        exit(1);
      }
      // ok!=0ならエラー対応(ok>0の場合は、オフセット不明)
      connect_code(blk, new_code(INS_LOD, 0, sym->offset));
      break;
    case NK_VAR:
      for (Node *id=node->ids; id!=NULL; id=id->next) {
        if (id->kind == NK_ID) {
          name = id->cval;
        } else if (id->kind == NK_ASSIGN_ST) {
          name = id->left->cval;
        } else {
          printf("Err v\n");
          exit(1);
        }

        sym = append_symbol(tbl, name, SK_VAR);
        if (sym == NULL) {
          printf("Err var\n");
          exit(1);
        }
        sym->offset = blk->var_count++;

        if (id->kind == NK_ASSIGN_ST) {
          append_code(blk, id->right, tbl);
          connect_code(blk, new_code(INS_STO, 0, sym->offset));
        }
      }
      break;

    case NK_CONST:
      for (Node *init=node->ids; init!=NULL; init=init->next) {
        sym = append_symbol(tbl, init->left->cval, SK_CONST);
        if (sym == NULL) {
          printf("Err const\n");
          exit(1);
        }
        sym->offset = blk->var_count++;

        append_code(blk, init->right, tbl);
        connect_code(blk, new_code(INS_STO, 0, sym->offset));
      }
      break;

    case NK_ASSIGN_ST: // 文
      append_code(blk, node->right, tbl);
      ok = search_symbol(tbl, node->left->cval, &sym);
      // ok = 0ならその関数内 -1は未定義
      if (sym->kind != SK_VAR) {
        printf("Err assign\n");
        exit(1);
      }
      connect_code(blk, new_code(INS_STO, 0, sym->offset));
      break;
    case NK_ASSIGN: // 式
      append_code(blk, node->right, tbl);
      ok = search_symbol(tbl, node->left->cval, &sym);
      // ok = 0ならその関数内 -1は未定義
      if (sym->kind != SK_VAR) {
        printf("Err assign\n");
        exit(1);
      }
      connect_code(blk, new_code(INS_STO, 0, sym->offset));
      connect_code(blk, new_code(INS_LOD, 0, sym->offset));
      break;

    case NK_ADD:
    case NK_SUB:
    case NK_MUL:
    case NK_DIV:
    case NK_EQ:
    case NK_NE:
    case NK_LT:
    case NK_LE:
    case NK_GT:
    case NK_GE:
      append_code(blk, node->left, tbl);
      append_code(blk, node->right, tbl);

      opr_n = 7; // 未使用
      if (kind == NK_ADD) { opr_n = 2; }
      if (kind == NK_SUB) { opr_n = 3; }
      else if (kind == NK_MUL) { opr_n = 4; }
      else if (kind == NK_DIV) { opr_n = 5; }
      else if (kind == NK_EQ) { opr_n = 8; }
      else if (kind == NK_NE) { opr_n = 9; }
      else if (kind == NK_LT) { opr_n = 10; }
      else if (kind == NK_LE) { opr_n = 13; }
      else if (kind == NK_GT) { opr_n = 12; }
      else if (kind == NK_GE) { opr_n = 11; }

      connect_code(blk, new_code(INS_OPR, 0, opr_n));
      break;
    case NK_MOD:
      // intに限れば
      // a%b -> a - (a/b)*bなど
      // このとき、結果はbの符号と一致

      tmp1_id = (blk->var_count)++;
      tmp2_id = (blk->var_count)++;
      append_code(blk, node->left, tbl);
      connect_code(blk, new_code(INS_STO, 0, tmp1_id));
      append_code(blk, node->right, tbl);
      connect_code(blk, new_code(INS_STO, 0, tmp2_id));

      connect_code(blk, new_code(INS_LOD, 0, tmp1_id));
      connect_code(blk, new_code(INS_LOD, 0, tmp1_id));
      connect_code(blk, new_code(INS_LOD, 0, tmp2_id));
      connect_code(blk, new_code(INS_OPR, 0, 5));
      connect_code(blk, new_code(INS_LOD, 0, tmp2_id));
      connect_code(blk, new_code(INS_OPR, 0, 4));
      connect_code(blk, new_code(INS_OPR, 0, 3));
      break;

    case NK_POW:
      append_code(blk, node->left, tbl);
      append_code(blk, node->right, tbl);
      ok = search_symbol(tbl, "_pow", &sym);
      connect_code(blk, new_code(INS_CAL, 0, sym->label));
      break;

    case NK_AND:
    case NK_OR:
      append_code(blk, node->left, tbl);
      append_code(blk, node->right, tbl);

      opr_n = 7;
      if (kind == NK_AND) { opr_n = 4; }
      else if (kind == NK_OR) { opr_n = 2; }

      connect_code(blk, new_code(INS_OPR, 0, opr_n));
      break;
    case NK_NOT:
      // false->0 true->それ以外と仮定
      append_code(blk, node->right, tbl);
      connect_code(blk, new_code(INS_LIT, 0, 0));
      connect_code(blk, new_code(INS_OPR, 0, 8));
      break;

    case NK_MINUS:
      append_code(blk, node->right, tbl);
      connect_code(blk, new_code(INS_OPR, 0, 1));
      break;

    case NK_IF:
      elselbl = (blk->label_n)++;
      append_code(blk, node->if_cond, tbl);
      connect_code(blk, new_code(INS_JPC, 0, elselbl));
      append_code(blk, node->if_block, tbl);

      if (node->else_block != NULL) {
        iflbl = (blk->label_n)++;
        connect_code(blk, new_code(INS_JMP, 0, iflbl));
        connect_code(blk, new_code(INS_LAB, 0, elselbl));
        append_code(blk, node->else_block, tbl);
        connect_code(blk, new_code(INS_LAB, 0, iflbl));
      } else {
        connect_code(blk, new_code(INS_LAB, 0, elselbl));
      }
      break;
    case NK_WHILE:
      head_lbl = (blk->label_n)++;
      tail_lbl = (blk->label_n)++;
      set_loop_label(blk, head_lbl, tail_lbl);

      connect_code(blk, new_code(INS_LAB, 0, head_lbl));
      append_code(blk, node->while_cond, tbl);
      connect_code(blk, new_code(INS_JPC, 0, tail_lbl));
      append_code(blk, node->body, tbl);
      connect_code(blk, new_code(INS_JMP, 0, head_lbl));
      connect_code(blk, new_code(INS_LAB, 0, tail_lbl));

      unset_loop_label(blk);
      break;
    case NK_DO_WHILE:
      head_lbl = (blk->label_n)++;
      tail_lbl = (blk->label_n)++;
      set_loop_label(blk, head_lbl, tail_lbl);

      connect_code(blk, new_code(INS_LAB, 0, head_lbl));
      append_code(blk, node->body, tbl);
      append_code(blk, node->while_cond, tbl);
      connect_code(blk, new_code(INS_JPC, 0, tail_lbl));
      connect_code(blk, new_code(INS_JMP, 0, head_lbl));
      connect_code(blk, new_code(INS_LAB, 0, tail_lbl));

      unset_loop_label(blk);
      break;
    case NK_FOR:
      head_lbl = (blk->label_n)++;
      tail_lbl = (blk->label_n)++;
      set_loop_label(blk, head_lbl, tail_lbl);

      append_code(blk, node->init, tbl);
      connect_code(blk, new_code(INS_LAB, 0, head_lbl));
      append_code(blk, node->for_cond, tbl);
      connect_code(blk, new_code(INS_JPC, 0, tail_lbl));
      append_code(blk, node->body, tbl);
      append_code(blk, node->incr, tbl);
      connect_code(blk, new_code(INS_JMP, 0, head_lbl));
      connect_code(blk, new_code(INS_LAB, 0, tail_lbl));

      unset_loop_label(blk);
      break;

    case NK_BREAK:
      // NULLの可能性あり
      tail_lbl = blk->lp_tail->label;
      connect_code(blk, new_code(INS_JMP, 0, tail_lbl));
      break;

    case NK_CONTINUE:
      // NULLの可能性あり
      head_lbl = blk->lp_head->label;
      connect_code(blk, new_code(INS_JMP, 0, head_lbl));
      break;

    case NK_SWITCH:
      tail_lbl = (blk->label_n)++;

      tmp_id = (blk->var_count)++;
      append_code(blk, node->switch_expr, tbl);
      connect_code(blk, new_code(INS_STO, 0, tmp_id));

      for (Node *c=node->cases; c!=NULL; c=c->next) {
        head_lbl = (blk->label_n)++;
        connect_code(blk, new_code(INS_LOD, 0, tmp_id));
        append_code(blk, c->case_expr, tbl);
        connect_code(blk, new_code(INS_OPR, 0, 8)); // =
        connect_code(blk, new_code(INS_JPC, 0, head_lbl));
        append_code(blk, c->case_body, tbl);
        connect_code(blk, new_code(INS_JMP, 0, tail_lbl));
        connect_code(blk, new_code(INS_LAB, 0, head_lbl));
      }
      if (node->dflt != NULL) {
        append_code(blk, node->dflt, tbl);
      }
      connect_code(blk, new_code(INS_LAB, 0, tail_lbl));
      break;

    case NK_GOTO:
      gt = (Goto *)malloc(sizeof(Goto));
      gt->code = new_code(INS_JMP, 0, -1);
      connect_code(blk, gt->code);
      gt->label = node->cval; // 一時的に使うだけなので、コピーしない
      gt->next = blk->gotos;
      blk->gotos = gt;
      break;
    case NK_LABEL:
      sym = append_symbol(tbl, node->cval, SK_LABEL);
      sym->label = blk->label_n++;
      connect_code(blk, new_code(INS_LAB, 0, sym->label));
      break;

    case NK_BLOCK:
      for (Node *s=node->stmts; s!=NULL; s=s->next) {
        append_code(blk, s, tbl);
      }
      break;

    case NK_CALL:
      for (Node *p=node->params; p!=NULL; p=p->next) {
        append_code(blk, p, tbl);
      }
      ok = search_symbol(tbl, node->cval, &sym);
      connect_code(blk, new_code(INS_CAL, 0, sym->label));
      break;
    case NK_RETURN:
      if (node->right == NULL) {
        connect_code(blk, new_code(INS_OPR, 0, 0));
      } else {
        append_code(blk, node->right, tbl);
        connect_code(blk, new_code(INS_RET, 0, blk->param_count));
      }
      break;

    case NK_WRITE:
      append_code(blk, node->right, tbl);
      connect_code(blk, new_code(INS_CSP, 0, 1));
      break;
    case NK_WRITELN:
      if (node->right != NULL) {
        append_code(blk, node->right, tbl);
        connect_code(blk, new_code(INS_CSP, 0, 1));
      }
      connect_code(blk, new_code(INS_CSP, 0, 2));
      break;
    case NK_READ:
      if (node->right->kind == NK_ID) {
        connect_code(blk, new_code(INS_CSP, 0, 0));
        ok = search_symbol(tbl, node->right->cval, &sym);
        connect_code(blk, new_code(INS_STO, 0, sym->offset));
      }
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
  int i, ok;
  Code *int_code;

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
  blk->gotos = NULL;
  blk->lp_head = blk->lp_tail = NULL;
  blk->label_n = lbl;

  ftbl = new_symbol_table(tbl);

  // funcのスキャン
  for (Node *n=node->body->stmts; n!=NULL; n=n->next) {
    if (n->kind == NK_FUNC) {
      sym = append_symbol(ftbl, n->cval, SK_FUNC);
      sym->label = (blk->label_n)++;
    }
  }

  search_symbol(tbl, node->cval, &sym);
  connect_code(blk, new_code(INS_LAB, 0, sym->label));
  connect_code(blk, int_code=new_code(INS_INT, 0, 0));

  i = 0;
  for (Node *p=node->params; p!=NULL; p=p->next) {
    sym = append_symbol(ftbl, p->cval, SK_VAR);
    sym->offset = (i++) - node->ival;
    blk->param_count++;
  }

  for (Node *stmt=node->body->stmts; stmt!=NULL; stmt=stmt->next) {
    append_code(blk, stmt, ftbl);
  }
  connect_code(blk, new_code(INS_OPR, 0, 0));

  for (Goto *gt=blk->gotos; gt!=NULL; gt=gt->next) {
    ok = search_symbol(ftbl, gt->label, &sym);
    if (ok != 0) {
      printf("Err goto!!\n");
      exit(1);
    }
    gt->code->arg = sym->label;
  }

  int_code->arg += blk->var_count;

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
  blk->label_n = 1;
  blk->gotos = NULL;
  blk->lp_head = blk->lp_tail = NULL;

  if (tbl == NULL) {
    tbl = new_symbol_table(NULL);
  }

  // 関数をスキャン
  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind == NK_FUNC) {
      sym = append_symbol(tbl, n->cval, SK_FUNC);
      sym->label = (blk->label_n)++;
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

uint64_t write_out_code(CodeBlock *blk, const char *fname) {
  FILE *fp;
  uint64_t instrs = 0;
  uint64_t lbls = 0;

  fp = fopen(fname, "w");
  if (fp == NULL) {
    return -1;
  }

  for (CodeBlock *b=blk; b!=NULL; b=b->next) {
    for (Code *c=b->head; c!=NULL; c=c->next) {
      fprintf(fp, "( %s, %d, %d )\n", INSTR_NAME[c->instr], c->lvl_diff, c->arg);
      instrs++;
      if (c->instr == INS_LAB) { lbls++; }
    }
  }

  fclose(fp);

  return (lbls<<32) + instrs;
}
