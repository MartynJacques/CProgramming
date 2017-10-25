#include <stdio.h>

float convert(float fahr) {
  return (fahr - 32) * 5.0/9.0;
}

main()
{
  printf("Farenheit Celcius\n");
  for (float i = 0.0; i < 200; i=i+20.0) {
    printf("%9.f %7.1f\n", i, convert(i));
  }
}
