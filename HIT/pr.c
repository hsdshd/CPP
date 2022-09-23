#include <stdio.h>
#include <stdlib.h>
char c;
int a[30];
int main()
{
    while ((c = getchar())&&c != EOF)
    {
        for (int i = 0; i < 26; i++)
            if ((int)c == i + 97)
                a[i]++;
    }
    for (int i = 0; i < 26; i++)
        if (a[i] == 0)
            continue;
        else
            printf("%c=%d\n", (int)(i + 97), a[i]);
    system("pause");
    return 0;
}
