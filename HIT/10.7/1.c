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
        printf("%s", a);
    else
        printf("No!");
    system("pause");
    return 0;
}