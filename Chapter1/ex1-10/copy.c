/**
 * @Author: marjac01
 * @Date:   2017-10-02T11:24:12+01:00
 * @Last modified by:   marjac01
 * @Last modified time: 2017-10-02T11:34:27+01:00
 */

#include <stdio.h>

main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      printf("\\t");
    } else if (c == '\b') {
      printf("\\b");
    } else if (c == '\\') {
      printf("\\\\");
    } else {
      putchar(c);
    }
  }
}
