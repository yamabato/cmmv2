#pragma once

// ノードの種類
typedef enum {
  NK_NOTHING,
  NK_INT, NK_ID,
  NK_MINUS,
  NK_GT, NK_GE, NK_LT, NK_LE, NK_EQ, NK_NE,
  NK_ADD, NK_SUB, NK_MUL, NK_DIV,
  NK_FUNC, NK_CALL, NK_RETURN,
  NK_IF, NK_WHILE,
  NK_BLOCK,
  NK_VAR,
  NK_ASSIGN,
  NK_WRITE, NK_WRITELN, NK_READ,
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
