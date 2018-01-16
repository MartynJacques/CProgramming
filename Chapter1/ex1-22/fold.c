#include <stdio.h>

#define MAXLINE 1000   /* maximum input line length */
#define LINESTOP 10    /* line length */

int line[LINESTOP];

int resetline(int position) {
  if (position == -1) {
    return 0;
  }
  position = position + 1; // copy after the whitespace
  int j = 0;
  for (int i = position; i < LINESTOP; i++) {
    line[j] = line[i];
    ++j;
  }
  return j;
}

void printline(int position) {
  if (position == -1) {
    position = LINESTOP;
  }

  for (int i = 0; i < position; i++) {
    putchar(line[i]);
  }
  putchar('\n');
}

int main()
{
    int position = 0;
    int c;
    int last_ws = -1;
    while ((c = getchar()) != EOF) {
      line[position] = c;

      if (c == ' ') {
        last_ws = position;
      }
      ++position;

      if (c == '\n') {
        printline(position-1);
        position = 0;
        last_ws = -1;
      }

      if (position == LINESTOP) {
          printline(last_ws);
          position = resetline(last_ws);
          last_ws = -1;
      }
    }
}
