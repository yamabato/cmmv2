#include "util.h"

int calc_pow(int a, int b) {
  int r = 1;

  if (b < 0) { return 1; }
  while (b > 0) {
    if (b%2 == 1) {
      r *= a;
    }
    a *= a;
    b /= 2;
  }

  return r;
}
