#pragma once

#include "node.h"

typedef enum {
  INS_ADD,
} Instr;

typedef struct Code {
  Instr instr;
  int lvl_diff; // l
  int arg;      // a

  struct Code *prev;
  struct Code *next;
} Code;

typedef struct CodeBlock {
  char *name;
  Code *head;
  Code *tail;

  int param_count;
  int var_count;

  struct CodeBlock *next;
} CodeBlock;

CodeBlock *connect_code_block(CodeBlock *, CodeBlock *);

CodeBlock *gen_code(Node *);
CodeBlock *gen_func_code_block(Node *);
CodeBlock *gen_code_blocks(Node *);
void append_code(CodeBlock *, Node *);
