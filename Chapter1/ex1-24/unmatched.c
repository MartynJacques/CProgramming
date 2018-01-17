#include <stdio.h>

int comment_count = 0;
int quote_count = 0;

void insidec() {
  int c;
  int d;
  while ((c = getchar()) != EOF) {
    if (c == '*') {
      d = getchar();
      if(d == '/') {
        --comment_count;
        return;
      }
    }
  }
  return;
}

void insideq() {
  int last_char = '\'';
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\'' && last_char != '\\') {
      --quote_count;
      return;
    }
    last_char = c;
  }
  return;
}

int main() {
  int bracket_count = 0;
  int brace_count = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '(') {
      ++bracket_count;
    } else if (c == ')') {
      --bracket_count;
    } else if (c == '{') {
      ++brace_count;
    } else if (c == '}') {
      --brace_count;
    } else if (c == '/') {
        if(getchar() == '*') {
          ++comment_count;
          insidec();
        }
    } else if (c == '\'') {
      ++quote_count;
      insideq();
    }


    if (bracket_count < 0) {
      printf("Brackets () are not balanced, exiting!\n");
      return 1;
    }
    if (brace_count < 0) {
      printf("Braces {} are not balanced, exiting!\n");
      return 1;
    }
    if (comment_count < 0) {
      printf("Comments /* */ are not balanced, exiting!\n");
      return 1;
    }
    if (quote_count < 0) {
      printf("Quotes ' ' are not balanced, exiting!\n");
      return 1;
    }
  }

  if (bracket_count != 0) {
    printf("Brackets () are not balanced!\n");
  }
  if (brace_count != 0) {
    printf("Braces {} are not balanced!\n");
  }
  if (comment_count != 0) {
    printf("Comments /* */ are not balanced!\n");
  }
  if (quote_count != 0) {
    printf("Quotes ' ' are not balanced!\n");
  }

}
