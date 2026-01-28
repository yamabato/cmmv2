#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vm.h"
#include "scan.h"

int search_jump_addr(LabelInfo *head, int label) {
  for (LabelInfo *li=head; li!=NULL; li=li->next) {
    if (li->label == label) { return li->line; }
  }
  return -1;
}

void scan_labels(Instr *head, Instr *tail, VM *vm) {
  int lineno = 0;
  int instr_no = 0;
  int addr = 0;
  int lbl;
  Instr *next_instr;
  LabelInfo *li_head= NULL;
  LabelInfo *lbl_info;

  for (Instr *instr=head; instr!=NULL; instr=instr->next) {
    if (instr->opcode == INS_LAB) {
      lbl_info = (LabelInfo *)malloc(sizeof(LabelInfo));
      lbl_info->line = lineno;
      lbl_info->label = instr->arg;

      lbl_info->next = li_head;
      li_head = lbl_info;
    } else {
      lineno++;
    }
  }

  vm->program = (Instr *)calloc(lineno, sizeof(Instr));
  vm->prog_size = lineno;
  for (Instr *instr=head; instr!=NULL; instr=next_instr) {
    next_instr = instr->next;

    instr_no++;
    if (instr->opcode != INS_LAB) {
      memcpy(&(vm->program[addr++]), instr, sizeof(Instr));

      if (instr->opcode==INS_JMP || instr->opcode==INS_JPC || instr->opcode==INS_CAL) {
        lbl = search_jump_addr(li_head, instr->arg);

        if (lbl == -1) {
          printf("err(line no. %d)\n", instr_no);
          lbl = 1;
        }
        vm->program[addr-1].arg = lbl;
      }
    }

    free(instr);
  }


}
