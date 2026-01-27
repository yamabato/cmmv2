#pragma once

#include "node.h"
#include "symbol.h"

typedef enum {
  INS_LOD,
  INS_LIT,
  INS_STO,
  INS_OPR,
  INS_INT,
  INS_JMP,
  INS_JPC,
  INS_CAL,
  INS_CSP,
  INS_LAB,
  INS_RET,
} Instr;

extern char *INSTR_NAME[];

typedef struct Code {
  Instr instr;
  int lvl_diff; // l
  int arg;      // a

  struct Code *prev;
  struct Code *next;
} Code;

typedef struct Goto {
  Code *code;
  char *label;
  struct Goto *next;
} Goto;

typedef struct CodeBlock {
  char *name;
  Code *head;
  Code *tail;

  int param_count;
  int var_count;

  int label_n;

  Goto *gotos;

  struct CodeBlock *next;
} CodeBlock;

CodeBlock *connect_code_block(CodeBlock *, CodeBlock *);

CodeBlock *gen_func_code_block(Node *, SymbolTable *, int);
CodeBlock *gen_code_blocks(Node *, SymbolTable *);
void append_code(CodeBlock *, Node *, SymbolTable *);

uint64_t write_out_code(CodeBlock *, const char *);
