#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "ast.h"
#include "opt.h"
#include "node.h"
#include "gencode.h"
#include "util.h"

CodeBlockLbl *find_lbl(CodeBlockLbl *head, int label) {
  for (CodeBlockLbl *cbl=head; cbl!=NULL; cbl=cbl->next) {
    if (cbl->lbl == label) {
      return cbl;
    }
  }
  return NULL;
}

Node *optimize_ast(Node *node) {
  Node *optimized_node;

  optimized_node = node;
  for (Node *n=node; n!=NULL; n=n->next) {
    n = const_folding(n);
  }

  return optimized_node;
}

bool is_const_bin_node(Node *node) {
  return (
    node->right!=NULL&&node->left!=NULL &&
    node->right->kind==NK_INT&&node->left->kind==NK_INT
  );
}

// 定数畳み込み
Node *const_folding(Node *node) {
  int val, r, l;
  Node *new_node;
  NodeKind kind;

  kind = node->kind;

  new_node = node;

  switch (kind) {
    case NK_ADD:
    case NK_SUB:
    case NK_MUL:
    case NK_DIV:
    case NK_MOD:
    case NK_POW:
      if (is_const_bin_node(node)) {
        r = node->right->ival;
        l = node->left->ival;

        if (kind==NK_ADD) { val = l+r; }
        else if (kind==NK_SUB) { val = l-r; }
        else if (kind==NK_MUL) { val = l*r; }
        else if (kind==NK_DIV) { val = l/r; }
        else if (kind==NK_MOD) { val = l%r; }
        else if (kind==NK_POW) { val = calc_pow(l ,r); }

        new_node = new_int_node(val);
      } else {
        new_node->left = const_folding(node->left);
        new_node->right = const_folding(node->right);
        if (is_const_bin_node(new_node)) {
          new_node = const_folding(new_node);
        }
      }
      break;

    case NK_MINUS:
      if (node->right!=NULL && node->right->kind==NK_INT) {
        new_node = new_int_node(-node->right->ival);
      }
      break;

    case NK_ASSIGN:
      new_node->left = const_folding(node->left);
      new_node->right = const_folding(node->right);
      break;

    case NK_FUNC:
      for (Node *n=node->fbody->stmts; n!=NULL; n=n->next) {
        n = const_folding(n);
      }
      break;

    default:
      break;
  }

  return new_node;
}

CodeBlock *optimize_code_blocks(CodeBlock *code_blocks) {
  CodeBlock *optimized_cb;

  optimized_cb = delete_unused_code_blocks(code_blocks);

  return optimized_cb;
}

// 使わないブロックを消す
CodeBlock *delete_unused_code_blocks(CodeBlock *code_blocks) {
  CodeBlock *optimized_cb, *cb_tail;
  CodeBlockLbl *cbl_head, *cbl_tail;
  bool is_first, changed;
  int target_lbl;

  optimized_cb = cb_tail = NULL;
  cbl_head = cbl_tail = NULL;
  is_first = true;
  for (CodeBlock *blk = code_blocks; blk != NULL; blk = blk->next) {
    CodeBlockLbl *new_cbl = (CodeBlockLbl *)malloc(sizeof(CodeBlockLbl));
    new_cbl->blk = blk;
    new_cbl->used = false;
    new_cbl->next = NULL;

    if (blk->head!=NULL && blk->head->instr==INS_LAB) {
      new_cbl->lbl = blk->head->arg;
    } else {
      continue;
    }

    if (is_first) {
      new_cbl->used = true;
      is_first = false;
    }

    if (blk->name!=NULL && strcmp(blk->name, "main")==0) {
      new_cbl->used = true;
    }

    if (cbl_head == NULL) {
      cbl_head = cbl_tail = new_cbl;
    } else {
      cbl_tail->next = new_cbl;
      cbl_tail = new_cbl;
    }
  }

  changed = true;
  while (changed) {
    changed = false;

    for (CodeBlockLbl *curr=cbl_head; curr!=NULL; curr=curr->next) {
      if (!curr->used) { continue; }

      for (Code *code=curr->blk->head; code!=NULL; code=code->next) {
        Instr instr = code->instr;
        if (instr == INS_JMP || instr == INS_JPC || instr == INS_CAL) {
          target_lbl = code->arg;
          CodeBlockLbl *target = find_lbl(cbl_head, target_lbl);

          if (target!=NULL && !target->used) {
            target->used = true;
            changed = true;
          }
        }
      }
    }
  }

  for (CodeBlockLbl *curr=cbl_head; curr!=NULL; curr=curr->next) {
    if (curr->used) {
      if (optimized_cb == NULL) {
        optimized_cb = curr->blk;
        cb_tail = curr->blk;
      } else {
        cb_tail->next = curr->blk;
        cb_tail = curr->blk;
      }
    }
  }

  if (cb_tail != NULL) {
      cb_tail->next = NULL;
  }

  return optimized_cb;
}

Code *optimize_code_lines(Code *lines) {
  Code *optimized_lines;

  optimized_lines = merge_labels(lines);

  return optimized_lines;
}

// 重なっているラベルを統合
Code *merge_labels(Code *lines) {
  int lbl = -1;
  int max_lbl = -1;
  int *label_replace;
  Code *head, *tail;

  for (Code *c=lines; c!=NULL; c=c->next) {
    if (c->instr==INS_LAB && c->arg>max_lbl) { max_lbl=c->arg; }
  }
  if (max_lbl <= 0) { return lines; }

  label_replace = (int *)malloc(sizeof(int)*(max_lbl+1));
  memset(label_replace, -1, sizeof(int)*(max_lbl+1));

  for (Code *c=lines; c!=NULL; c=c->next) {
    if (c->instr!= INS_LAB) { lbl=-1; continue; }

    if (lbl == -1) { lbl = c->arg; }
    else { label_replace[c->arg]=lbl; }
  }

  for (Code *c=lines; c!=NULL; c=c->next) {
    if (
        (c->instr==INS_CAL || c->instr==INS_JMP || c->instr==INS_JPC) &&
        label_replace[c->arg]!=-1){
      c->arg = label_replace[c->arg];
    }

    if (head == NULL) {
      head = tail = c;
    } else if (c->instr==INS_LAB && label_replace[c->arg]!=-1) {
    } else {
      tail->next = c;
      tail = c;
    }
  }

  return head;
}

