#include <stdio.h>
#include <string.h>

#include "node.h"
#include "parser.h"
#include "tac.h"
#include "show.h"

extern FILE *yyin;

int main(int argc, char **argv) {
  char *fname;
  FILE *ast_file;

  if (argc < 2) {
    printf("usage: %s <input file>\n", argv[0]);
    return 1;
  }

  fname = argv[1];

  yyin = fopen(fname, "r");
  if (yyparse() != 0) {
    printf("Error!!\n");
    return 1;
  }

  ast_file = fopen(strcat(fname, ".ast"), "w");
  show_ast(ast_root, ast_file);

  return 0;
}
