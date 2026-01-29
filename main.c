#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "node.h"
#include "parser.h"
#include "show.h"
#include "show.h"
#include "gencode.h"
#include "ast.h"
#include "opt.h"

extern FILE *yyin;

int main(int argc, char **argv) {
  char *fname, *dot_pos;
  // char ast_fname[256];
  char pl_fname[256];
  // FILE *ast_file;
  uint64_t instrs;
  Node *runtime_ast;
  CodeBlock *code_blocks;
  Code *code_lines;
  bool do_opt = false;
  bool opt_ast, opt_blk, opt_lines;
  opt_ast = opt_blk = opt_lines = false;

  if (argc < 2) {
    printf("usage: %s <input file>\n", argv[0]);
    return 1;
  }

  for (int i=1; i<argc; i++) {
    if (strcmp(argv[i], "-o") == 0) { do_opt = true; }
    else if (strcmp(argv[i], "-oA") == 0) { opt_ast = true; }
    else if (strcmp(argv[i], "-oB") == 0) { opt_blk = true; }
    else if (strcmp(argv[i], "-oL") == 0) { opt_lines = true; }
    else { fname = argv[i]; }
  }

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

  if (do_opt || opt_ast) {
    ast_root = optimize_ast(ast_root);
  }

  // AST -> PL/0コード
  code_blocks = gen_code_blocks(ast_root, NULL);

  if (do_opt || opt_blk) {
    code_blocks = optimize_code_blocks(code_blocks);
  }

  // PL/0 code blocks -> PL/0 code lines
  code_lines = linearize_code_blocks(code_blocks);

  if (do_opt || opt_blk) {
    code_lines = optimize_code_lines(code_lines);
  }

  strcpy(pl_fname, fname);
  dot_pos = strrchr(pl_fname, '.');
  if (dot_pos == NULL) { strcat(pl_fname, ".pl"); }
  else { strcpy(dot_pos, ".pl"); }
  instrs = write_out_code(code_lines, pl_fname);

  printf("%s -> %s\n", fname, pl_fname);
  printf("    Total Instructions: %ld\n", instrs&(0xFFFFFFFF));
  printf("    Label Instructions: %ld\n", instrs>>32);
  printf("Non-Label Instructions: %d\n", (uint32_t)instrs-(uint32_t)(instrs>>32));

  return 0;
}
