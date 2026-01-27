#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "vm.h"
#include "parse.h"

int main(int argc, char **argv) {
  char *fname;
  FILE *fp;
  Instr *head, *tail;

  head = tail = NULL;

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

  parse(fp, &head, &tail);

  for (Instr *i=head; i!=NULL; i=i->next) {
    printf("%d\n", i->opcode);
  }

  return 0;
}
