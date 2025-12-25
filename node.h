#pragma once

// ノードの種類
typedef enum {
  NK_NOTHING,    // 0
  NK_INT, NK_ID, // 1-2
  NK_MINUS,      // 3
  NK_GT, NK_GE, NK_LT, NK_LE, NK_EQ, NK_NE, // 4-9
  NK_ADD, NK_SUB, NK_MUL, NK_DIV,           // 10-13
  NK_FUNC, NK_CALL, NK_RETURN, // 14-16
  NK_IF, NK_WHILE, // 17-18
  NK_BLOCK,  // 19
  NK_VAR,    // 20
  NK_ASSIGN, // 21
  NK_WRITE, NK_WRITELN, NK_READ, // 22-24
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

  int ival;
  double dval;
  char *cval;
} Node;
