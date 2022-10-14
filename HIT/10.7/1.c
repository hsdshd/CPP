#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool pd(char a[]) {
    for (int i = 0; i <= strlen(a) / 2; i++)
        if (a[i] != a[strlen(a) - i - 1])
            return false;
    return true;
}
int main() {
    char a[34];
    scanf("%s", a);
    if (pd(a))
        printf("%s\n", a);
    else
        printf("No!\n");

    char s[25][11] = {"asfd", "basfd"};
    for (int i = 0; i < 24; i++)
        scanf("%s", s[i]);
    int flag = 0;
    for (int i = 0; i < 24; i++) {
        if (strcmp(s[i], "ttaaggcgcg") == 0)
            flag = 1;
        if (flag == 1 && strcmp(s[i], "cgggtggcgt") == 0 &&
            strcmp(s[i + 1], "gcgcccaagt") == 0) {
            char str1[] = "cccaagccac";
            memcpy(s[i], str1, sizeof(str1));
            char str2[] = "gctgtcactt";
            memcpy(s[i + 1], str2, sizeof(str2));
        }
    }
    for (int i = 0; i < 24; i++)
        printf("%s  ", s[i]);

    system("pause");
    return 0;
}