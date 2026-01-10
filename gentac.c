#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "gentac.h"

TACList *connect_tac_list(TACList *l1, TACList *l2) {
  if (l1->head == NULL) {
    l1 = l2;
  } else {
    l1->tail->next = l2->head;
    l1->tail = l2->tail;
  }
  return l1;
}

TACList *insert_tac(TACList *l, TAC *c, bool in_first) {
  if (in_first) {
    c->next = l->head;
    l->head = c;
  } else if (l->tail != NULL) {
    l->tail->next = c;
    l->tail = c;
  } else {
    l->tail = c;
  }

  if (l->tail == NULL) {
    l->tail = l->head;
  }
  if (l->head == NULL) {
    l->head = l->tail;
  }

  return l;
}

TAC *emit_instr_jmp(TAC *addr) {
  TAC *jmp = (TAC *)malloc(sizeof(TAC));
  jmp->op = TO_JMP;
  jmp->dst.val.tac = addr;
  return jmp;
}

TAC *emit_instr_lbl(int lbl_id) {
  TAC *lbl = (TAC *)malloc(sizeof(TAC));
  lbl->op = TO_LBL;
  lbl->dst.val.ival = lbl_id;
  return lbl;
}

TAC *emit_instr_ret(TACValue *val) {
  TAC *ret = (TAC *)malloc(sizeof(TAC));
  ret->src1 = vale;
  return ret;
}

void gen_ret_tac(Node *node, GenTACCtx *ctx, TACList *list) {
  ast2tac(node->right, ctx, list);
}

void gen_block_tac(Node *node, GenTACCtx *ctx, TACList *list) {
  for (Node *s=node->stmts; s!=NULL; s=s->next) {
    ast2tac(s, ctx, list);
  }
}

void gen_func_tac(Node *node, GenTACCtx *ctx, TACList *list) {
  TAC *lbl;

  insert_tac(list, emit_instr_lbl(ctx->lbl_id++), false);
  gen_block_tac(node->body, ctx, list);
  insert_tac(list, emit_instr_ret(NULL), false);
}

void ast2tac(Node *node, GenTACCtx *ctx, TACList *list) {
  NodeKind kind = node->kind;

  switch (kind) {
    case NK_RETURN:
      gen_ret_tac(node, ctx, list);
      break;
    case NK_FUNC:
      gen_func_tac(node, ctx, list);
      break;
    default:
      break;
  }
  printf("%d\n", node->kind);
  printf("%d\n", node->params);
}

TAC *gen_tac(Node *node) {
  Node *main_func = NULL;
  GenTACCtx ctx = { 0 };
  TACList *list, *l;
  TAC *jmp, *lbl;

  list = (TACList*)malloc(sizeof(TACList));
  l = (TACList*)malloc(sizeof(TACList));
  list->head = list->tail = NULL;
  ctx.tbl = new_symbol_table(NULL);

  for (Node *n=node; n!=NULL; n=n->next) {
    l->head = l->tail = NULL;

    if (n->kind==NK_FUNC && strcmp(n->cval, "main")==0) {
      main_func = n;
    } else {
      ast2tac(n, &ctx, l);
      list = connect_tac_list(list, l);
    }
  }

  lbl = emit_instr_lbl(ctx.lbl_id++);
  jmp = emit_instr_jmp(lbl);

  list = insert_tac(list, lbl, false);
  list = insert_tac(list, jmp, true);

  if (main_func != NULL) {
    l->head = l->tail = NULL;
    ast2tac(main_func, &ctx, l);
    list = connect_tac_list(list, l);
  }

  return list->head;
}
