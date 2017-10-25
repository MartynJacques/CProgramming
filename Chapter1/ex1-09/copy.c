/**
 * @Author: marjac01
 * @Date:   2017-10-02T11:09:10+01:00
 * @Last modified by:   marjac01
 * @Last modified time: 2017-10-02T11:23:53+01:00
 */

#include <stdio.h>

main()
{
  int prev;
  int c;
  while ((c = getchar()) != EOF) {
      if (!(c == ' ' && prev == ' '))
        putchar(c);
      prev = c;
  }
}
