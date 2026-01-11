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
    if (l2 != NULL) { free(l2); }
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

ValueType conv_to_value_type(Node *t) {
  return VT_INT;
}

TACValue *new_tac_value(TACArgKind kind, ValueType type) {
  TACValue *val = (TACValue *)malloc(sizeof(TACValue));
  val->kind = kind;
  val->type = type;
  return val;
}

TACValue *new_tv_imm_int(int v) {
  val = new_tac_value(TVK_IMM, VT_INT);
  val->val.ival = v;
  return val;
}

TACValue *new_tv_var(int id, char *name, ValueType type) {
  val = new_tv_var(TVK_NAME, type);
  val->val.var->name = name;
  val->val.var.vid = id;
  return val;
}

TAC *emit_instr_jmp(TAC *addr) {
  TAC *jmp = (TAC *)malloc(sizeof(TAC));
  jmp->op = TO_JMP;
  jmp->dst->val.tac = addr;
  return jmp;
}

TAC *emit_instr_lbl(int lbl_id) {
  TAC *lbl = (TAC *)malloc(sizeof(TAC));
  lbl->op = TO_LBL;
  lbl->dst->val.ival = lbl_id;
  return lbl;
}

TAC *emit_instr_ret(TACValue *val) {
  TAC *ret = (TAC *)malloc(sizeof(TAC));
  ret->op = TO_RET;
  ret->src1 = val;
  return ret;
}

TAC *emit_instr_param(ValueType type, char *name, int n, GenTACCtx *ctx) {
  Symbol *sym;
  int lvl;

  lvl = search_symbol(ctx->tbl, name, *sym);
  if (lvl == 0) { // ERROR }

  sym = append_symbol(ctx->tbl, name, SK_VAR);
  TAC *param = (TAC *)malloc(sizeof(TAC));
  tac->op = TO_PRM;
  tac->src1 = make_var(name, type, ctx)
  tac->src2 = n;
  return tac;
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
  ValueType type;
  int n = 0;

  insert_tac(list, emit_instr_lbl(ctx->lbl_id++), false);
  for (Node *p=node->params; p!=NULL; p=p->next) {
    type = conv_to_value_type(p->left);
    insert_tac(list, emit_instr_param(type, p->right->cval, n++, ctx), false);
  }
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
