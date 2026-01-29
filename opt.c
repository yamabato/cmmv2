#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "opt.h"
#include "gencode.h"

CodeBlockLbl *find_lbl(CodeBlockLbl *head, int label) {
  for (CodeBlockLbl *cbl=head; cbl!=NULL; cbl=cbl->next) {
    if (cbl->lbl == label) {
      return cbl;
    }
  }
  return NULL;
}

CodeBlock *optimize_code_blocks(CodeBlock *code_blocks) {
  CodeBlock *optimized_cb, *cb_tail;
  CodeBlockLbl *cbl_head, *cbl_tail;
  bool is_first, changed;
  int target_lbl;

  optimized_cb = cb_tail = NULL;
  cbl_head = cbl_tail = NULL;
  is_first = true;
  for (CodeBlock *blk = code_blocks; blk != NULL; blk = blk->next) {
    CodeBlockLbl *new_cbl = (CodeBlockLbl *)malloc(sizeof(CodeBlockLbl));
    new_cbl->blk = blk;
    new_cbl->used = false;
    new_cbl->next = NULL;

    if (blk->head!=NULL && blk->head->instr==INS_LAB) {
      new_cbl->lbl = blk->head->arg;
    } else {
      new_cbl->lbl = -1;
    }

    if (is_first) {
      new_cbl->used = true;
      is_first = false;
    }

    if (blk->name!=NULL && strcmp(blk->name, "main")==0) {
      new_cbl->used = true;
    }

    if (cbl_head == NULL) {
      cbl_head = cbl_tail = new_cbl;
    } else {
      cbl_tail->next = new_cbl;
      cbl_tail = new_cbl;
    }
  }

  changed = true;
  while (changed) {
    changed = false;

    for (CodeBlockLbl *curr=cbl_head; curr!=NULL; curr=curr->next) {
      if (!curr->used) { continue; }

      for (Code *code=curr->blk->head; code!=NULL; code=code->next) {
        Instr instr = code->instr;
        if (instr == INS_JMP || instr == INS_JPC || instr == INS_CAL) {
          target_lbl = code->arg;
          CodeBlockLbl *target = find_lbl(cbl_head, target_lbl);

          if (target!=NULL && !target->used) {
            target->used = true;
            changed = true;
          }
        }
      }
    }
  }

  for (CodeBlockLbl *curr=cbl_head; curr!=NULL; curr=curr->next) {
    if (curr->used) {
      if (optimized_cb == NULL) {
        optimized_cb = curr->blk;
        cb_tail = curr->blk;
      } else {
        cb_tail->next = curr->blk;
        cb_tail = curr->blk;
      }
    }
  }

  if (cb_tail != NULL) {
      cb_tail->next = NULL;
  }

  return optimized_cb;
}

