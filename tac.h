#pragma once

// TACの命令種
typedef enum {
  TO_ADD,
} TACCode;

// TACでの値の型
typedef enum {
  TVK_INT,
  TVK_FLOAT,
  TVK_CHAR,
  TVK_STR,

  TVK_NAME, // 変数名
  TVK_TMP,  // 一時変数
} TACValKind;

// TACで値を格納するUnion
typedef union {
  long long int ival;
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
typedef struct TACValue {
  TACValKind kind;
  TACVal     val;
} TACValue;

// TACの1命令
// dst = op(src1, src2);
typedef struct TAC {
  TACCode  op;
  TACValue dst;
  TACValue src1;
  TACValue src2;
} TAC;
