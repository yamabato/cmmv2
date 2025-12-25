#include <stdio.h>

#include "node.h"
#include "parser.h"
#include "show.h"

extern FILE *yyin;

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("usage: %s <input file>\n", argv[0]);
    return 1;
  }

  yyin = fopen(argv[1], "r");

  if (yyparse() != 0) {
    printf("Error!!\n");
    return 1;
  }

  show_ast(ast_root);

  return 0;
}
