#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[100], x = 'y';
void solve() {
    int ans = 0;
    for (int i = strlen(s) - 1, j = 0; i >= 0; i--, j++) {
        if (s[i] < 48 || s[i] > 57)
            ans += (int)pow(16, j) * (s[i] - 49 - '0' + 10);
        else
            ans += (int)pow(16, j) * (s[i] - '0');
    }
    printf("十进制数%d\n继续吗？\n", ans);
    memset(s, 0, sizeof(s));
}
int main() {
    while (x == 'y') {
        printf("输入十六进制数：\n");
        scanf("%s", s);
        solve();
        setbuf(stdin, NULL);
        scanf("%c", &x);
    }
    system("pause");
    return 0;
}