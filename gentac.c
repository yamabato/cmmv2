#include <stdio.h>
#include <stdlib.h>

#include "gentac.h"

TAC *gen_tac(Node *node) {
  TAC *tac;

  tac = (TAC *)malloc(sizeof(TAC));

  printf("%d\n", node->kind);

  return tac;
}
