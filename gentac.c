#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gentac.h"

TAC *gen_jmp(TAC *addr) {
  TAC *jmp = (TAC *)malloc(sizeof(TAC));
  jmp->op = TO_JMP;
  jmp->dst.val.tac = addr;
  return jmp;
}

TAC *gen_lbl(int lbl_id) {
  TAC *lbl = (TAC *)malloc(sizeof(TAC));
  lbl->op = TO_LBL;
  lbl->dst.val.ival = lbl_id;
  return lbl;
}

TACList *connect_tac_list(TACList *l1, TACList *l2) {
  if (l1->head == NULL) {
    l1 = l2;
  } else {
    l1->tail->next = l2->head;
    l1->tail = l2->tail;
  }
  return l1;
}

void ast2tac(Node *node, GenTACCtx *ctx, TACList *list) {
  printf("%d\n", node->kind);
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

  lbl = gen_lbl(ctx.lbl_id++);
  jmp = gen_jmp(lbl);

  if (list->head != NULL) {
    list->tail->next = lbl;
  } else {
    list->head = lbl;
  }
  list->tail = lbl;
  jmp->next = list->head;
  list->head = jmp;

  if (main_func != NULL) {
    l->head = l->tail = NULL;
    ast2tac(main_func, &ctx, l);
    list = connect_tac_list(list, l);
  }

  return list->head;
}
