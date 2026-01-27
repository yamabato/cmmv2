#include <stdio.h>
#include <stdlib.h>

#include "vm.h"
#include "parse.h"

int main(int argc, char **argv) {
  FILE *fp;
  Instr *instr;
  char *fname;
  char buf[256];

  if (argc < 2) {
    printf("usage: %s <input file>\n", argv[0]);
    return 1;
  }

  fname = argv[1];
  fp = fopen(fname, "r");
  if (fp == NULL) {
    printf("cannot open file: %s\n", fname);
    exit(1);
  }

  while (fgets(buf, sizeof(buf), fp)) {
    instr = (Instr *)malloc(sizeof(Instr));
    parse_line(buf, instr);
    printf("%d\n", instr->opcode);
  }

  return 0;
}
