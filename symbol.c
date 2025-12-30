#include <stdlib.h>
#include <string.h>

#include "hash.h"
#include "symbol.h"

SymbolTable *new_symbol_table(SymbolTable *st) {
  SymbolTable *new_st;

  new_st = (SymbolTable *)calloc(1, sizeof(SymbolTable));
  new_st->parent = st;

  if (st == NULL) {
    new_st->level = 0;
  } else {
    new_st->level = st->level+1;
  }

  return new_st;
}

Symbol *append_symbol(SymbolTable *st, char *name, SymbolKind kind) {
  int hash = pearson_hashing(name);
  Symbol *sym;

  for (Symbol *s=st->buckets[hash]; s!=NULL; s=s->next) {
    if (strcmp(s->name, name) == 0) { return NULL; }
  }

  sym = (Symbol *)malloc(sizeof(Symbol));
  sym->name = strdup(name);
  sym->hash = hash;
  sym->kind = kind;

  sym->next = st->buckets[hash];
  st->buckets[hash] = sym;

  return sym;
}
