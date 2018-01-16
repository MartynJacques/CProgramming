#include <stdio.h>

void inside() {
  int c;
  int d;
  while ((c = getchar()) != EOF) {
    if (c == '*') {
      d = getchar();
      if(d == '/') {
        return;
      }
    }
    if(c == '\n'){
      return;
    }
  }
}

int main() {
  int c;
  int d;
  while ((c = getchar()) != EOF) {
    if (c == '/') {
      d = getchar();
      if(d == '*') {
        inside();
      } else {
        putchar(c);
        putchar(d);
      }
    } else {
      putchar(c);
    }
  }
}
