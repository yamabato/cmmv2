#pragma once

// ノードの種類
typedef enum {
  NK_NOTHING,    // 0
  NK_INT, NK_ID, // 1-2
  NK_MINUS,      // 3
  NK_GT, NK_GE, NK_LT, NK_LE, NK_EQ, NK_NE, // 4-9
  NK_ADD, NK_SUB, NK_MUL, NK_DIV, NK_MOD, NK_POW,  // 10-15
  NK_FUNC, NK_CALL, NK_RETURN, // 16-18
  NK_IF, NK_WHILE, // 19-20
  NK_BLOCK,  // 21
  NK_VAR,    // 22
  NK_ASSIGN, // 23
  NK_WRITE, NK_WRITELN, NK_READ, // 24-26
  NK_PARAM, NK_TYPE, // 27-28
} NodeKind;

// ノード
typedef struct Node {
  NodeKind kind;
  struct Node *next;
  struct Node *left;
  struct Node *right;
  struct Node *cond;
  struct Node *body;
  struct Node *if_block;
  struct Node *else_block;
  struct Node *params;
  struct Node *ids;
  struct Node *stmts;

  int line;

  int ival;
  double dval;
  char *cval;
} Node;
