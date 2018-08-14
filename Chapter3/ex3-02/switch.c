#include <stdio.h>

#define MAX_LEN 50

void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    while (s[i] != '\0') {
        switch(s[i]) {
            case('\n'):
                t[j] = '\\';
                t[j+1] = 'n';
                j += 2;
                break;
            case('\t'):
                t[j] = '\\';
                t[j+1] = 't';
                j += 2;
                break;
            default:
                t[j] = s[i];
                j++;
                break;
        }
        i++;
    }
}

void capture(char s[], char t[]) {
    int i = 0;
    int j = 0;
    while (s[i] != '\0') {
        switch(s[i]) {
            case('\\'):
                switch(s[i+1]) {
                    case('n'):
                        t[j] = '\n';
                        i += 2;
                        j++;
                        break;
                    default:
                        t[j] = s[i];
                        i++;
                        j++;
                        break;
                }
                break;
            default:
                t[j] = s[i];
                j++;
                i++;
                break;
        }
    }
    t[j] = '\0';
}

int main() {
    char input[] = "This is \t a \n test";
    printf("%s\n", input);
    char output[MAX_LEN];

    escape(input, output);
    printf("%s\n", output);

    char final[MAX_LEN];
    capture(output, final);
    printf("%s\n", final);
}

