#include <stdio.h>

#define LINELENGTH 12
#define TABLENGTH 4

int buffer[LINELENGTH];

int last_whitespace()
{
  int last_ws = LINELENGTH;
  for (int i = LINELENGTH-1; i > 0; i--) {
    if (buffer[i] == ' ') {
      return i;
    }
  }
  return last_ws;
}

void printline(int position)
{
  for (int i = 0; i < position; i++) {
    putchar(buffer[i]);
  }
  putchar('\n');
}

int reset_buffer(int from, int to)
{
  int j = 0;
  for (int i = from; i < to; i++) {
    buffer[j] = buffer[i];
    j++;
  }
  return j;
}

int expand_tab(int pos_in_b)
{
  buffer[pos_in_b] = ' ';
  ++pos_in_b;
  while (pos_in_b < LINELENGTH & pos_in_b % TABLENGTH != 0) {
    buffer[pos_in_b] = ' ';
    ++pos_in_b;
  }
  if (pos_in_b == LINELENGTH) {
    // We are at end of line, print it
    printline(pos_in_b);
    return 0;
  }
  return pos_in_b;
}

int main()
{
  int c;
  int pos_in_b = 0;
  while ((c = getchar()) != EOF) {

    if (c == '\t') {
      pos_in_b = expand_tab(pos_in_b);
    } else {
      buffer[pos_in_b] = c;
      ++pos_in_b;
    }

    if (pos_in_b == LINELENGTH) {
      // we are at end of buffer, find last whitespace and print until that
      int last_ws = last_whitespace();
      printline(last_ws);
      // copy rest of buffer to beginning of buffer, and continue from there
      pos_in_b = reset_buffer(last_ws+1, pos_in_b);
    } else if (c == '\n') {
      printline(pos_in_b-1);
      pos_in_b = 0;
    }
  }
}
