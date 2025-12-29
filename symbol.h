#pragma once

#include <stdbool.h>

#include "tac.h"

typedef struct Symbol Symbol;
typedef struct SymbolTable SymbolTable;

typedef enum {
  SK_VAR,
  SK_CONST,
  SK_FUNC,
} SymbolKind;

typedef struct {
  bool is_global;
  bool is_const;
  int offset;
} VarInfo;

typedef struct {
  int params;
  ValueType *ptypes;
} FuncInfo;

typedef union {
  VarInfo vinfo;
  FuncInfo finfo;
} SymbolInfo;

// TAC生成時などにシンボルを管理するよう
typedef struct Symbol {
  char *name;
  int *hash;
  ValueType  type; // 変数や返り値の型(int, float, ...)
  SymbolKind kind; // 種類(variable, constant, function)
  SymbolInfo info;
  Symbol *next;
} Symbol;

typedef struct SymbolTable {
  Symbol *buckets[256];
  SymbolTable *parent;
} SymbolTable;
