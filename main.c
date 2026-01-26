#include <stdio.h>
#include <string.h>

#include "node.h"
#include "parser.h"
#include "show.h"
#include "show.h"
#include "gencode.h"

extern FILE *yyin;

int main(int argc, char **argv) {
  char *fname;
  FILE *ast_file;
  CodeBlock *code_blocks;

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

  // AST -> PL/0コード
  code_blocks = gen_code_blocks(ast_root, NULL);
  write_out_code(code_blocks, "output.pl");

  return 0;
}
