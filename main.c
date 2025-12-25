#include <stdio.h>

#include "node.h"
#include "parser.h"
#include "show.h"

extern FILE *yyin;

int main() {
  yyin = fopen("fact.cmm", "r");

  if (yyparse() != 0) {
    printf("Error!!\n");
    return 1;
  }

  show_ast(ast_root);

  return 0;
}
