#pragma once

// ノードの種類
typedef enum {
  NK_NOTHING,
  NK_INT, NK_ID,
  NK_MINUS,
  NK_GT, NK_GE, NK_LT, NK_LE, NK_EQ, NK_NE,
  NK_ADD, NK_SUB, NK_MUL, NK_DIV, NK_MOD, NK_POW,
  NK_FUNC, NK_CALL, NK_RETURN,
  NK_IF, NK_WHILE, NK_FOR,
  NK_SWITCH, NK_CASE,
  NK_LABEL, NK_GOTO,
  NK_BLOCK,
  NK_VAR,
  NK_ASSIGN,
  NK_WRITE, NK_WRITELN, NK_READ,
  NK_PARAM, NK_TYPE,
} NodeKind;

// ノード
typedef struct Node {
  NodeKind kind;

  union {
    struct { // 単項・二項演算
      struct Node *left;
      struct Node *right;
    };
    struct { // for
      struct Node *init;
      struct Node *incr;
      struct Node *for_cond;
    };
    struct { // while
      struct Node *while_cond;
      struct Node *body;
    };
    struct { // if
      struct Node *if_cond;
      struct Node *if_block;
      struct Node *else_block;
    };
    struct { // block
      struct Node *stmts;
    };
    struct { // call
      struct Node *params;
      struct Node *fbody;
    };
    struct { // var
      struct Node *ids;
    };
    struct { // switch
      struct Node *switch_expr;
      struct Node *cases;
      struct Node *dflt;
    };
    struct { // case
      struct Node *case_expr;
      struct Node *case_body;
    };
  };
  struct Node *next;

  int line;

  int ival;
  double dval;
  char *cval;
} Node;
