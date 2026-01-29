#pragma once

#include <stdbool.h>

#include "gencode.h"

typedef struct CodeBlockLbl {
  CodeBlock *blk;
  int lbl;
  bool used;
  struct CodeBlockLbl *next;
} CodeBlockLbl;

CodeBlock *optimize_code_blocks(CodeBlock *);
