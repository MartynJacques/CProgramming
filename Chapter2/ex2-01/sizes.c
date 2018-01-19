#include <stdio.h>
#include <limits.h>

main()
{
  // int max_int;
  // for (int i = 1; i != 0; i++) {
  //   if (i > max_int) {
  //     max_int = i;
  //   }
  // }
  // printf("%i\n", max_int);

  // signed int max_char = 0;
  // for (int i = 1; i != 0; i++) {
  //   if (i > max_char) {
  //     max_char = i;
  //     putchar((char)i);
  //   }
  // }
  // printf("%i\n", max_char);
  // printf("%i\n", CHAR_MAX);
  signed char max_char = ((unsigned char)~0 >> 1);
  printf("Max signed char value: %d\n", max_char);
  printf("Min signed char value: %d\n", ~max_char);
  printf("Max unsigned char value: %d\n\n", (unsigned char)~0);

  signed short max_short = ((unsigned short)~0 >> 1);
  printf("Max signed short value: %d\n", max_short);
  printf("Min signed short value: %d\n", ~max_short);
  printf("Max unsigned short value: %d\n\n", (unsigned short)~0);

  signed int max_int = ((unsigned int)~0 >> 1);
  printf("Max signed int value: %d\n", max_int);
  printf("Min signed int value: %d\n", ~max_int);
  printf("Max unsigned int value: %u\n", (unsigned int)~0);

  signed long max_long = ((unsigned long)~0 >> 1);
  printf("Max signed long value: %ld\n", max_long);
  printf("Min signed long value: %ld\n", ~max_long);
  printf("Max unsigned long value: %lu\n", (unsigned long)~0);

}
