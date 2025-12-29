#include "hash.h"

int pearson_hashing(char *str) {
  uint8_t h = 0;

  while (*str) {
    h = PH_T_TABLE[h ^ (uint8_t)(*str++)];
  }

  return (int)h;
}
