#include <stdio.h>

#define OUT 1
#define IN 0
#define MAXWORDSIZE 20

main()
{
  int c;
  int location = OUT;
  int wordlength = 0;

  int lengths[MAXWORDSIZE] = { 0 };

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      location = OUT;
      if (wordlength != 0)
        ++lengths[wordlength];
      wordlength = 0;
    } else {
      location = IN;
      ++wordlength;
    }
  }

  for (int i = 0; i < MAXWORDSIZE; i++) {
    printf("%2d: ", i);
    for (int j = 0; j < lengths[i]; j++)
      putchar('#');
    putchar('\n');
  }
}
