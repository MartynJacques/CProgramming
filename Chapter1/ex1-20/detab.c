// Exercise 1-20. Write a program detab that replaces tabs in the input with
// the proper number of blanks to space to the next tab stop. Assume a fixed
// set of tab stops, say every n columns. Should n be a variable or a
// symbolic parameter?
#include <stdio.h>

int TAB_STOPS = 4;

int main() {
  int c;
  int char_count = 0;
  while ((c = getchar()) != EOF) {
    int next_tab_stop = 4 - (char_count % TAB_STOPS);
    if (c == '\t') {
      for (int i = 0; i < next_tab_stop; i++) {
        putchar(' ');
      }
    } else {
      putchar(c);
    }
    char_count++;
  }
}
