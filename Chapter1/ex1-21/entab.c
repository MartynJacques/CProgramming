// Exercise 1-21. Write a program entab that replaces strings of blanks by the
// minimum number of tabs and blanks to achieve the same spacing. Use the same
// tab stops as for detab. When either a tab or a single blank would suffice to
// reach a tab stop, which should be given preference?
#include "stdio.h"

int TAB_SPACES = 9;

int main()
{
  int c;
  int char_count = 0;
  int blank_count = 0;
  while ((c = getchar()) != EOF) {
    char_count++;
    if (c == ' ') {
      blank_count++;
    } else {
      if (blank_count != 0) {
        int this_tab_length = TAB_SPACES - (char_count % TAB_SPACES);
        if (blank_count > this_tab_length) {
          putchar('\t');
          blank_count = blank_count - this_tab_length;
          for (int i = 0; i < blank_count / TAB_SPACES; i++) {
            putchar('\t');
          }
          for (int i = 0; i < blank_count % TAB_SPACES; i++) {
            putchar(' ');
          }
        } else {
          for (int i = 0; i < blank_count; i++) {
            putchar(' ');
          }
        }
        blank_count = 0;
      }
      putchar(c);
    }
  }

}
