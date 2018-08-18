#include <stdio.h>

int main() {
    int stack[4];
    int sp = 0;

    stack[0] = 1;
    stack[1] = 2;
    sp = 1;

    int top_of_s = stack[sp];
    stack[++sp] = top_of_s;
//    sp += 1;

    for (int i = 0; i < 4; i++)
        printf("%i, ", stack[i]);
}
