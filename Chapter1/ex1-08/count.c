/**
 * @Author: marjac01
 * @Date:   2017-10-02T10:58:17+01:00
 * @Last modified by:   marjac01
 * @Last modified time: 2017-10-02T11:07:22+01:00
 */

#include <stdio.h>

main()
{
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;

  int c;
  while ((c = getchar()) != EOF) {
      if (c == ' ')
        ++blanks;
      if (c == '\t')
        ++tabs;
      if (c == '\n')
        ++newlines;
  }

  printf("Blanks = %d, Tabs = %d, New lines: %d\n", blanks, tabs, newlines);
}
