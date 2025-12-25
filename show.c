#include <stdio.h>

#include "show.h"
#include "node.h"

void print_spaces(int depth) {
  for (int i=0; i<depth; i++) { printf(" "); }
}

void show_node(Node *node, int depth) {
  print_spaces(depth);

  switch (node->kind) {
    case NK_FUNC:
      printf("func def: %s (", node->cval);
      for (Node *p=node->params; p!=NULL; p=p->next) {
        printf("%s", p->cval);
        if (p->next!=NULL) { printf(", "); }
      }
      printf(")\n");
      break;
    default:
      break;
  }

  if (node->next != NULL) {
    show_node(node->next, depth);
  }
}

void show_ast(Node *ast_root) {
  show_node(ast_root, 0);
}
