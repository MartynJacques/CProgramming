#include <stdio.h>

int main() {
  int bracket_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '(') {
      ++bracket_count;
    }
  }
}
