#include <stdio.h>

#define MAXCOL 10
#define TABINC 8

char line[MAXCOL];

int findblnk(int pos);
int newpos(int pos);
void printl(int pos);

void printl(int pos)
{
  for (int i = 0; i < pos; ++i) {
    putchar(line[i]);
  }
  if (pos > 0) {
    putchar('\n');
  }
}

int findblnk(int pos)
{
  while (pos > 0 && line[pos] != ' ') {
    --pos;
  }
  if (pos == 0) {
    return MAXCOL;
  } else {
    return pos+1;
  }
}

int newpos(int pos)
{
  int i, j;
  if (pos <= 0 || pos >= MAXCOL) {
    return 0;
  } else {
    j = 0;
    for (j = pos; j < MAXCOL; ++j) {
      line[i] = line[j];
      ++i;
    }
    return i;
  }

}

int main()
{
  int c, pos;

  pos = 0;
  while ((c = getchar()) != EOF) {
    line[pos] = c;
    if (c == '\n') {
      printl(pos);
      pos = 0;
    } else if (++pos >= MAXCOL) {
      pos = findblnk(pos);
      printl(pos);
      pos = newpos(pos);
    }
  }
}
