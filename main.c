#include <stdio.h>
#include <string.h>

#include "node.h"
#include "parser.h"
#include "show.h"
#include "show.h"
#include "gencode.h"

extern FILE *yyin;

int main(int argc, char **argv) {
  char *fname, *dot_pos;
  char ast_fname[256];
  char pl_fname[256];
  FILE *ast_file;
  int instrs;
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

  strcpy(ast_fname, fname);
  ast_file = fopen(strcat(ast_fname, ".ast"), "w");
  show_ast(ast_root, ast_file);

  // AST -> PL/0コード
  code_blocks = gen_code_blocks(ast_root, NULL);

  strcpy(pl_fname, fname);
  dot_pos = strrchr(pl_fname, '.');
  // if (dot_pos == NULL) { pl_fname=strcat(fname, ".pl"); }
  if (dot_pos == NULL) { strcat(pl_fname, ".pl"); }
  else { strcpy(dot_pos, ".pl"); }
  instrs = write_out_code(code_blocks, pl_fname);

  printf("%s -> %s -> %s\n", fname, ast_fname, pl_fname);
  printf("Total Instructions: %d\n", instrs);

  return 0;
}
