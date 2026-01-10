#pragma once

#include <stdbool.h>

#include "tac.h"
#include "symbol.h"
#include "node.h"

typedef struct GenTACCtx {
  int var_id; // 変数・定数に割り当てるID
  int tmp_id; // 一時変数のID
  int lbl_id; // ジャンプ先ラベルのID
  int offset; // スタックのオフセット

  SymbolTable *tbl;
} GenTACCtx;

typedef struct TACList {
  TAC *head;
  TAC *tail;
} TACList;

TAC *emit_instr_lbl(int);
TAC *emit_instr_jmp(TAC *);
TAC *emit_instr_ret(TACValue *);

TACList *connect_tac_list(TACList *, TACList *);
TACList *insert_tac(TACList *, TAC *, bool);

void ast2tac(Node *, GenTACCtx *, TACList *);
TAC *gen_tac(Node *);
