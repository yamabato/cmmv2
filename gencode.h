#pragma once

#include "node.h"
#include "symbol.h"

typedef enum {
  INS_OPR,
  INS_RET,
  INS_INT,
} Instr;

static char *INSTR_NAME[] = {
  "OPR",
  "RET",
  "INT",
};

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

CodeBlock *gen_func_code_block(Node *, SymbolTable *);
CodeBlock *gen_code_blocks(Node *, SymbolTable *);
void append_code(CodeBlock *, Node *, SymbolTable *);

int write_out_code(CodeBlock *, const char *);
