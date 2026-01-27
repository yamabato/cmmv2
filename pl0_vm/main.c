#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "vm.h"
#include "parse.h"
#include "scan.h"

int main(int argc, char **argv) {
  char *fname;
  FILE *fp;
  Instr *head, *tail;
  VM *vm;

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
  vm = (VM *)malloc(sizeof(VM));
  scan_labels(head, tail, vm);

  run(vm);

  return 0;
}
