// Original loop
// for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
//        s[i] = c;

#include <stdio.h>

void new() {
  int lim = 10;
  int s[lim];
  int c;
  int i = 0;
  while (i < lim) {
    if (i < lim - 1) {
      if ((c=getchar()) != '\n') {
        if (c != EOF) {
          s[i] = c;
          ++i;
        } else {
          i = lim;
        }
      } else {
        i = lim;
      }
    } else {
      i = lim;
    }
  }
  for (int i = 0; i < lim; i++) {
    putchar(s[i]);
  }
}

void old() {
  int lim = 10;
  int s[lim];
  int c;
  for(int i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
    s[i] = c;
  }
  for (int i = 0; i < lim; i++) {
    putchar(s[i]);
  }
}

main() {
  new();
}
