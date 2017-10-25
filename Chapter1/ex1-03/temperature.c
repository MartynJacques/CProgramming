/**
 * @Author: marjac01
 * @Date:   2017-10-02T10:11:38+01:00
 * @Last modified by:
 * @Last modified time: 2017-10-02T10:33:21+01:00
 */

#include <stdio.h>

// print Fahrenheit-Celsuis tabl for fahr = 0, 20, ..., 300
main()
{
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit Celcius\n");
  fahr = lower;
  while (fahr <= upper) {
      celcius = (5.0/9.0) * (fahr-32.0);
      printf("%10.0f %7.1f\n", fahr, celcius);
      fahr = fahr + step;
  }
}
