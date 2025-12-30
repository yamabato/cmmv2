#pragma once

#include "tac.h"
#include "symbol.h"
#include "node.h"

typedef struct GenTACCtx {
  int tmp_id; // 一時変数のID
  int lbl_id; // ジャンプ先ラベルのID
  int offset; // スタックのオフセット

  SymbolTable *tbl;
} GenTACCtx;

typedef struct TACList {
  TAC *head;
  TAC *tail;
} TACList;

TAC *gen_jmp(TAC *);

TACList *connect_tac_list(TACList *, TACList *);
void ast2tac(Node *, GenTACCtx *, TACList *);
TAC *gen_tac(Node *);
