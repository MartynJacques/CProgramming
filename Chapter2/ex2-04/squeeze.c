// Exercise 2-4. Write an alternative version of squeeze(s1,s2) that
// deletes each character in s1 that matches any character in the string s2

#include <stdio.h>

void delete(char array[], int i) {
  while(array[i] != '\0') {
    array[i] = array[i+1];
    i++;
  }
}

void println(char array[]) {
  int i = 0;
  while (array[i++] != '\0') {
    putchar(array[i]);
  }
  putchar('\n');
}

int contains(char array[], char c) {
  int i = 0;
  while (array[i++] != '\0') {
      if (array[i] == c) {
        return 1;
      }
  }
  return 0;
}

void squeeze(char s1[], char s2[]) {
  int i = 0;
  int j = 0;
  while (s1[i] != '\0') {
    while (s2[j++] != '\0') {
      if (contains(s2, s1[i]) == 1) {
        delete(s1, i);
      } else {
        i++;
      }
    }
  }

  println(s1);
}

int main() {
  char s1[] = "axbycz";
  char s2[] = "abc";

  squeeze(s1, s2);
}
