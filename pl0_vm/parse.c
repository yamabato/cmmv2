#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void parse(FILE *fp, Instr **head, Instr **tail) {
  int ok;
  Instr *instr;
  char buf[256];

  // 行ごとに命令をパース
  while (fgets(buf, sizeof(buf), fp)) {
    instr = (Instr *)malloc(sizeof(Instr));
    memset(instr, 0, sizeof(Instr));
    ok = parse_line(buf, instr);

    if (ok == -1) {
      printf("err: %s\n", buf);
      continue;
    }

    if (*tail == NULL) { *head=*tail=instr; }
    else { (*tail)->next=instr; instr->prev=*tail; *tail=instr; }
  }
}
