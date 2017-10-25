#include <stdio.h>

main()
{
  int c;
  int c_counts[128] = { 0 };

  while ((c = getchar()) != EOF) {
    ++c_counts[c];
  }

  for (int i = 0; i < 128; i++) {
    printf("%c: ", i);
    for (int j = 0; j < c_counts[i]; j++) {
      putchar('#');
    }
    putchar('\n');
  }
}
