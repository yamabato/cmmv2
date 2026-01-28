#include <stdio.h>
#include <string.h>

#include "node.h"
#include "parser.h"
#include "show.h"
#include "show.h"
#include "gencode.h"
#include "ast.h"

extern FILE *yyin;

int main(int argc, char **argv) {
  char *fname, *dot_pos;
  // char ast_fname[256];
  char pl_fname[256];
  // FILE *ast_file;
  uint64_t instrs;
  Node *runtime_ast;
  CodeBlock *code_blocks;

  if (argc < 2) {
    printf("usage: %s <input file>\n", argv[0]);
    return 1;
  }

  fname = argv[1];

  // ランタイムをASTに
  yyin = fopen("./runtime/runtime.cmm", "r");
  yyparse();
  runtime_ast = ast_root;

  yyin = fopen(fname, "r");
  if (yyparse() != 0) {
    printf("Error PARSE!!\n");
    return 1;
  }
  ast_root = append_node(runtime_ast, ast_root);

  /*
  strcpy(ast_fname, fname);
  ast_file = fopen(strcat(ast_fname, ".ast"), "w");
  show_ast(ast_root, ast_file);
  */

  // AST -> PL/0コード
  code_blocks = gen_code_blocks(ast_root, NULL);

  strcpy(pl_fname, fname);
  dot_pos = strrchr(pl_fname, '.');
  if (dot_pos == NULL) { strcat(pl_fname, ".pl"); }
  else { strcpy(dot_pos, ".pl"); }
  instrs = write_out_code(code_blocks, pl_fname);

  printf("%s -> %s\n", fname, pl_fname);
  printf("    Total Instructions: %ld\n", instrs&(0xFFFFFFFF));
  printf("    Label Instructions: %ld\n", instrs>>32);
  printf("Non-Label Instructions: %d\n", (uint32_t)instrs-(uint32_t)(instrs>>32));

  return 0;
}
