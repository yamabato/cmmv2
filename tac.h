#pragma once

#include <stdint.h>

// TACの命令種
typedef enum {
  TO_ADD,
} TACCode;

typedef enum {
  VT_INT,
  VT_FLOAT,
  VT_CHAR,
  VT_STR,
} ValueType;

// TACでの引数の型
typedef enum {
  TVK_IMM,  // 即値
  TVK_NAME, // 変数名
  TVK_TMP,  // 一時変数
} TACArgKind;

// TACで値を格納するUnion
typedef union {
  int64_t ival;
  double dval;
  char cval;

  // 文字列
  struct {
    char *text;
    int  sid;
  } str;

  // 変数
  struct {
    char *name; // 元の変数名
    int  vid;   // 割り当てた変数ID
  } var;
  // 一時変数
  int tvar;
} TACVal;

// TACでの値
typedef struct {
  TACArgKind kind; // 引数の種類(即値 or 変数)
  ValueType  type; // 引数の型(int, float, str, char, ...)
  TACVal     val;
} TACValue;

// TACの1命令
// dst = op(src1, src2);
typedef struct {
  TACCode  op;
  TACValue dst;
  TACValue src1;
  TACValue src2;
} TAC;
