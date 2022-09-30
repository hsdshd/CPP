#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[8][20]={0};
char c;
int main() {
    for (int i = 0; i < 8; i++)
        scanf("%s", s[i]);
    char tmp[20]={0};
    for (int i = 0; i < 7; i++)
        for (int j = 0 ; j < 7-i; j++)
            if (strcmp(s[j], s[j + 1]) > 0) {
                strcpy(tmp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], tmp);
            }
    for (int i = 0; i < 8; i++)
        printf("%s\n", s[i]);
    system("pause");
    return 0;
}