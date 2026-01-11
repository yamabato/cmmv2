#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gencode.h"

CodeBlock *connect_code_block(CodeBlock *blk1, CodeBlock *blk2) {
  if (blk1 == NULL) { return blk2; }
  if (blk2 == NULL) { return blk1; }

  blk1->next = blk2;
  return blk1;
}

void append_code(CodeBlock *blk, Node *node) {
  printf("%d\n", node->kind);
}

CodeBlock *gen_func_code_block(Node *node) {
  CodeBlock *blk;

  blk = (CodeBlock *)malloc(sizeof(CodeBlock));
  blk->name = strdup(node->cval);
  blk->head = blk->tail = NULL;
  blk->param_count = blk->var_count = 0;
  blk->next = NULL;

  for (Node *stmt=node->body->stmts; stmt!=NULL; stmt=stmt->next) {
    append_code(blk, stmt);
  }

  return blk;
}

CodeBlock *gen_code_blocks(Node *node) {
  CodeBlock *fb, *func_blocks;
  CodeBlock *glb_block;
  CodeBlock *main_block;

  func_blocks = glb_block = main_block = NULL;

  for (Node *n=node; n!=NULL; n=n->next) {
    if (n->kind == NK_FUNC) {
      if (strcmp(n->cval, "main") == 1) {
        main_block = gen_func_code_block(n);
      } else {
        fb = gen_func_code_block(n);
        func_blocks = connect_code_block(func_blocks, fb);
      }
    } else {
      append_code(glb_block, n);
    }
  }

  return func_blocks;
}
