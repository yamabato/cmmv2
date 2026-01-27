#pragma once

#include "vm.h"

typedef struct LabelInfo {
  int line;
  int label;
  struct LabelInfo *next;
} LabelInfo;

int search_jump_addr(LabelInfo *, int);
void scan_labels(Instr *, Instr *, VM *);
