#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, x, flag, ok[200];
    for (int i = 0; i < 200; i++)
        ok[i] = 0;
    char c[15];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 200; i++)
            ok[i] = 0;
        flag = 1;
        scanf("%d", &x);
        scanf("%s", &c);
        for (int i = 0; i < x; i++) {
            if (c[i] != 'T' && c[i] != 'i' && c[i] != 'm' && c[i] != 'u' &&
                c[i] != 'r')
                flag = 0;
            ok[c[i]]++;
        }
        if (ok['T'] != 1 || ok['i'] != 1 || ok['m'] != 1 || ok['u'] != 1 ||
            ok['r'] != 1)
            flag = 0;
        if (flag == 1 && x == 5)
            printf("YES\n");
        else
            printf("NO\n");
    }
    system("pause");
    return 0;
}