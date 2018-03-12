#include <stdio.h>
#include <math.h>

main() {
  int c;
  int i = 0;
  int value = 0;
  while ((c = getchar()) != '\n') {
    if (c == '0' && i == 0) {
      c = getchar();
      c = getchar();
    }
    if (isdigit(c)) {
      c = c - '0';
    } else {
      c = c - 'A' + 10;
    }
    value = value + (c * pow(16, i));
    ++i;
  }
  printf("%i\n", value);
}
