/**
 * @Author: marjac01
 * @Date:   2017-10-02T10:11:38+01:00
 * @Last modified by:   marjac01
 * @Last modified time: 2017-10-02T10:37:25+01:00
 */

#include <stdio.h>

// print Fahrenheit-Celsuis tabl for fahr = 0, 20, ..., 300
main()
{
  float fahr, celcius;
  float lower, upper, step;

  lower = -20;
  upper = 50;
  step = 5;

  printf("Celcius Fahrenheit\n");
  celcius = lower;
  while (celcius <= upper) {
      fahr = (celcius * 9.0/5.0) + 32;
      printf("%7.0f %10.1f\n", celcius, fahr);
      celcius = celcius + step;
  }
}
