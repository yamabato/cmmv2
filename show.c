#include <stdio.h>

#include "show.h"
#include "node.h"

void print_spaces(int depth) {
  for (int i=0; i<depth; i++) { printf(" "); }
}

void show_node(Node *node, int depth) {
  NodeKind kind = node->kind;

  print_spaces(depth);
  switch (kind) {
    case NK_INT:
      printf("INT(%d)", node->ival);
      break;
    case NK_ID:
      printf("ID(%s)", node->cval);
      break;

    case NK_ADD:
    case NK_MUL:
      printf("(");
      show_node(node->left, 0);

      if (kind == NK_ADD) { printf(" + "); }
      else if (kind == NK_MUL) { printf(" * "); }

      show_node(node->right, 0);
      printf(")");
      break;

    case NK_BLOCK:
      for (Node *s=node->stmts; s!=NULL; s=s->next) {
        show_node(s, depth);
      }
      break;

    case NK_FUNC:
      printf("FUNC DEF: %s (", node->cval);
      for (Node *p=node->params; p!=NULL; p=p->next) {
        printf("%s", p->cval);
        if (p->next!=NULL) { printf(", "); }
      }
      printf(")\n");
      show_node(node->body, depth+1);
      printf("\n");
      break;
    case NK_RETURN:
      printf("RETURN ");
      show_node(node->right, depth+1);
      printf("\n");
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
