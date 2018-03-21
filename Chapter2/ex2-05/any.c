#include <stdio.h>

int any(char s1[], char s2[]) {
  int i = 0;
  while (s1[i++] != '\0') {
      int j = 0;
      while (s2[j++] != '\0') {
        if (s1[i] == s2[j]) {
          return i;
        }
      }
  }
  return -1;
}

main() {
  char s1[] = "222122";
  char s2[] = "33333133";
  printf("%i\n", any(s1, s2)); // should be 3
}
