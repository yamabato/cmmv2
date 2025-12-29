#include <stdio.h>

#include "show.h"
#include "node.h"

void print_spaces(int depth, FILE *fp) {
  for (int i=0; i<depth; i++) { fprintf(fp, "  "); }
}

void show_node(Node *node, int depth, FILE *fp) {
  if (node == NULL) { return; }

  NodeKind kind = node->kind;

  // fprintf(fp, "%04d: ", node->line);
  print_spaces(depth, fp);
  switch (kind) {
    case NK_INT:
      fprintf(fp, "INT: %d\n", node->ival);
      break;
    case NK_ID:
      fprintf(fp, "ID: %s\n", node->cval);
      break;

    case NK_MINUS:
    case NK_WRITE:
    case NK_WRITELN:
    case NK_READ:
      fprintf(fp, "UNARY OPER: ");
      if (kind == NK_MINUS) { fprintf(fp, "MINUS"); }
      else if (kind == NK_WRITE) { fprintf(fp, "WRITE"); }
      else if (kind == NK_WRITELN) { fprintf(fp, "WRITELN"); }
      else if (kind == NK_READ) { fprintf(fp, "READ"); }
      fprintf(fp, "\n");

      print_spaces(depth+1, fp);
      fprintf(fp, "RIGHT:\n");
      show_node(node->right, depth+2, fp);
      break;

    case NK_ADD:
    case NK_SUB:
    case NK_MUL:
    case NK_MOD:
    case NK_EQ:
    case NK_LE:
    case NK_ASSIGN:
      fprintf(fp, "BINARY OPER: ");
      if (kind == NK_ADD) { fprintf(fp, "+"); }
      else if (kind == NK_SUB) { fprintf(fp, "-"); }
      else if (kind == NK_MUL) { fprintf(fp, "*"); }
      else if (kind == NK_MOD) { fprintf(fp, "%%"); }
      else if (kind == NK_EQ) { fprintf(fp, "=="); }
      else if (kind == NK_LE) { fprintf(fp, "<="); }
      else if (kind == NK_ASSIGN) { fprintf(fp, ":="); }
      fprintf(fp, "\n");

      print_spaces(depth+1, fp);
      fprintf(fp, "LEFT:\n");
      show_node(node->left, depth+2, fp);
      print_spaces(depth+1, fp);
      fprintf(fp, "RIGHT:\n");
      show_node(node->right, depth+2, fp);
      break;

    case NK_CALL:
      fprintf(fp, "CALL: %s\n", node->cval);

      print_spaces(depth+1, fp);
      fprintf(fp, "PARAMS:\n");
      for (Node *p=node->params; p!=NULL; p=p->next) {
        show_node(p, depth+2, fp);
      }
      break;

    case NK_BLOCK:
      fprintf(fp, "BLOCK\n");
      for (Node *s=node->stmts; s!=NULL; s=s->next) {
        show_node(s, depth+1, fp);
      }
      break;
    case NK_IF:
      fprintf(fp, "IF\n");
      print_spaces(depth+1, fp);
      fprintf(fp, "COND\n");
      show_node(node->cond, depth+2, fp);
      fprintf(fp, "\n");
      show_node(node->if_block, depth+1, fp);

      if (node->else_block != NULL) {
        print_spaces(depth, fp);
        fprintf(fp, "ELSE\n");
        show_node(node->else_block, depth+1, fp);
      }
      break;

    case NK_WHILE:
      fprintf(fp, "WHILE\n");
      print_spaces(depth+1, fp);
      fprintf(fp, "COND\n");
      show_node(node->cond, depth+2, fp);
      fprintf(fp, "\n");
      show_node(node->body, depth+1, fp);
      break;

    case NK_VAR:
      fprintf(fp, "VAR:\n");
      for (Node *id=node->ids; id!=NULL; id=id->next) {
        show_node(id, depth+1, fp);
      }
      fprintf(fp, "\n");
      break;

    case NK_FUNC:
      fprintf(fp, "FUNC DEF: %s (", node->cval);
      for (Node *p=node->params; p!=NULL; p=p->next) {
        fprintf(fp, "%s", p->cval);
        if (p->next!=NULL) { fprintf(fp, ", "); }
      }
      fprintf(fp, ")\n");
      show_node(node->body, depth+1, fp);
      fprintf(fp, "\n");
      break;
    case NK_RETURN:
      fprintf(fp, "RETURN\n");
      show_node(node->right, depth+1, fp);
      fprintf(fp, "\n");
      break;
    default:
      fprintf(fp, "-*-UNSUPPORTED NODE KIND(%d)-*-\n", kind);
      break;
  }

  if (node->next != NULL) {
    show_node(node->next, depth, fp);
  }
}

void show_ast(Node *ast_root, FILE *fp) {
  show_node(ast_root, 0, fp);
}
