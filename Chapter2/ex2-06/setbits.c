#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned u = x >> (p-n+1);
  unsigned t = u | (~0 << n);
  return y & t;
}

main() {
  
}
