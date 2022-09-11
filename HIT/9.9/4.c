#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[100];
int main()
{
    printf("Enter string:");
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        printf("%c", s[i]);
    }
    system("pause");
    return 0;
}