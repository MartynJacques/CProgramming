#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c;
  int location = OUT;
  int prev_location = location;

  while ((c = getchar()) != EOF) {
      if (c == '\n' || c == '\t' || c == ' ') {
        location = OUT;
        if (prev_location == IN) {
            printf("\n");
        }
      } else {
        location = IN;
        putchar(c);
      }
      prev_location = location;
  }
}
