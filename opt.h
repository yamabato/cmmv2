#pragma once

#include <stdbool.h>

#include "node.h"
#include "gencode.h"

typedef struct CodeBlockLbl {
  CodeBlock *blk;
  int lbl;
  bool used;
  struct CodeBlockLbl *next;
} CodeBlockLbl;

typedef struct LabelPos {
  int lbl;
  int replace;
  struct LabelPos *next;
} LabelPos;

CodeBlock *optimize_code_blocks(CodeBlock *);
CodeBlock *delete_unused_code_blocks(CodeBlock *);

Code *optimize_code_lines(Code *);
Code *merge_labels(Code *);

Node *optimize_ast(Node *);
Node *const_folding(Node *);
