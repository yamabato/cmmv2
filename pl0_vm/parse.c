#include <stdio.h>
#include <string.h>

#include "vm.h"
#include "parse.h"

OpCode str_to_opcode(char *iname) {
  for (int i=0; i<sizeof(MnemonicMap)/sizeof(MnemonicPair); i++) {
    if (strcmp(iname, MnemonicMap[i].iname) == 0) {
      return MnemonicMap[i].opcode;
    }
  }
  return INS_UNK;
}

int parse_line(char *line, Instr *instr) {
  char iname[8];
  int level, arg;
  int count;

  count = sscanf(line, " ( %15[^,], %d , %d )", iname, &level, &arg);
  if (count != 3) { return -1; }

  instr->opcode = str_to_opcode(iname);
  instr->level = level;
  instr->arg = arg;
  return 1;
}
