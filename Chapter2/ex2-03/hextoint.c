#include <stdio.h>
#include <math.h>

int length(char s[]) {
  int len = 0;
  while (s[len] != '\0') {
    len++;
  }
  return len;
}

void htoi(char s[]) {
  int len = length(s);
  int start = 0;
  if (s[1] == 'X' || s[1] == 'x') {
    start = 2;
  }

  int value = 0;
  int hex_index = 0;
  for (int i = len-1; i >= start; i--) {
    int c = s[i];
    if (isdigit(c)) {
      c = c - '0';
    } else {
      c = c - 'A' + 10;
    }
    value = value + (c * pow(16, hex_index));
    ++hex_index;
  }

  printf("%i\n", value);
}


main() {
  char test_str[] = "A05F";
  htoi(test_str);
}
