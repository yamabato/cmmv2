#pragma once

// ノードの種類
typedef enum {
  NK_NOTHING,
  NK_INT, NK_ID, NK_CHAR, NK_STR,
  NK_MINUS, NK_IS_ODD,
  NK_GT, NK_GE, NK_LT, NK_LE, NK_EQ, NK_NE,
  NK_AND, NK_OR, NK_NOT,
  NK_ADD, NK_SUB, NK_MUL, NK_DIV, NK_MOD, NK_POW,
  NK_FUNC, NK_CALL, NK_RETURN,
  NK_IF, NK_WHILE, NK_DO_WHILE, NK_FOR,
  NK_BREAK, NK_CONTINUE,
  NK_SWITCH, NK_CASE,
  NK_LABEL, NK_GOTO,
  NK_BLOCK,
  NK_VAR, NK_CONST,
  NK_VAR_DECL, NK_CONST_DECL,
  NK_ASSIGN, NK_ASSIGN_ST,
  NK_WRITE, NK_WRITELN, NK_PUTC,
  NK_CSP,
  NK_PARAM, NK_TYPE,
  NK_ARR_DECL, NK_ARR_SIZE, NK_ARR_REF, NK_ARR_INDEX,
  NK_ARR_ELEMS, NK_ARR_INIT, NK_ARR_ASSIGN,
  NK_ADDR, NK_DEREF,
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
      struct Node *for_body;
    };
    struct { // while
      struct Node *while_cond;
      struct Node *while_body;
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
      struct Node *decls;
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
    struct { // array
      struct Node *arr_size;
    };
  };
  struct Node *next;

  int line;

  int depth;
  int ival;
  double dval;
  char *cval;
} Node;
