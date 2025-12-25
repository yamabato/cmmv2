#include <stdio.h>

#include "show.h"
#include "node.h"

void print_spaces(int depth) {
  for (int i=0; i<depth; i++) { printf("  "); }
}

void show_node(Node *node, int depth) {
  if (node == NULL) { return; }

  NodeKind kind = node->kind;

  print_spaces(depth);
  switch (kind) {
    case NK_INT:
      printf("INT: %d\n", node->ival);
      break;
    case NK_ID:
      printf("ID: %s\n", node->cval);
      break;

    case NK_MINUS:
    case NK_WRITE:
    case NK_WRITELN:
    case NK_READ:
      printf("UNARY OPER: ");
      if (kind == NK_MINUS) { printf("MINUS"); }
      else if (kind == NK_WRITE) { printf("WRITE"); }
      else if (kind == NK_WRITELN) { printf("WRITELN"); }
      else if (kind == NK_READ) { printf("READ"); }
      printf("\n");

      print_spaces(depth+1);
      printf("RIGHT:\n");
      show_node(node->right, depth+2);
      break;

    case NK_ADD:
    case NK_SUB:
    case NK_MUL:
    case NK_MOD:
    case NK_EQ:
    case NK_LE:
    case NK_ASSIGN:
      printf("BINARY OPER: ");
      if (kind == NK_ADD) { printf("+"); }
      else if (kind == NK_SUB) { printf("-"); }
      else if (kind == NK_MUL) { printf("*"); }
      else if (kind == NK_MOD) { printf("%%"); }
      else if (kind == NK_EQ) { printf("=="); }
      else if (kind == NK_LE) { printf("<="); }
      else if (kind == NK_ASSIGN) { printf(":="); }
      printf("\n");

      print_spaces(depth+1);
      printf("LEFT:\n");
      show_node(node->left, depth+2);
      print_spaces(depth+1);
      printf("RIGHT:\n");
      show_node(node->right, depth+2);
      break;

    case NK_CALL:
      printf("CALL: %s\n", node->cval);

      print_spaces(depth+1);
      printf("PARAMS:\n");
      for (Node *p=node->params; p!=NULL; p=p->next) {
        show_node(p, depth+2);
      }
      break;

    case NK_BLOCK:
      printf("BLOCK\n");
      for (Node *s=node->stmts; s!=NULL; s=s->next) {
        show_node(s, depth+1);
      }
      break;
    case NK_IF:
      printf("IF\n");
      print_spaces(depth+1);
      printf("COND\n");
      show_node(node->cond, depth+2);
      printf("\n");
      show_node(node->if_block, depth+1);

      if (node->else_block != NULL) {
        print_spaces(depth);
        printf("ELSE\n");
        show_node(node->else_block, depth+1);
      }
      break;

    case NK_WHILE:
      printf("WHILE\n");
      print_spaces(depth+1);
      printf("COND\n");
      show_node(node->cond, depth+2);
      printf("\n");
      show_node(node->body, depth+1);
      break;

    case NK_VAR:
      printf("VAR:\n");
      for (Node *id=node->ids; id!=NULL; id=id->next) {
        show_node(id, depth+1);
      }
      printf("\n");
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
      printf("RETURN\n");
      show_node(node->right, depth+1);
      printf("\n");
      break;
    default:
      printf("-*-UNSUPPORTED NODE KIND(%d)-*-\n", kind);
      break;
  }

  if (node->next != NULL) {
    show_node(node->next, depth);
  }
}

void show_ast(Node *ast_root) {
  show_node(ast_root, 0);
}
