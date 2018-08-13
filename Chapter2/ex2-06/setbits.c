#include <stdio.h>

unsigned char setbits(unsigned char x, int p, int n, unsigned char y) {
  return 'Y';
}

int main() {
  unsigned char x = 0b00000000;
  unsigned char y = 0b00000111;
  unsigned char z = setbits(x, 4, 3, y);
  printf("%i\n" , z);
  printf("%i\n" , y);
}
