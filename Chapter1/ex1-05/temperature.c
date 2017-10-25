/**
 * @Author: marjac01
 * @Date:   2017-10-02T10:40:34+01:00
 * @Last modified by:   marjac01
 * @Last modified time: 2017-10-02T10:43:18+01:00
 */

#include <stdio.h>

main()
{
  int fahr;
  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}
