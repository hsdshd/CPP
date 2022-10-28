#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int ax[25], ans = 0, n, k;
int pd(int x) {
    for (int i = 2; i * i < x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
void dfs(int m, int sum, int startx) {
    if (m == k) {
        if (pd(sum) == 1)
            ans++;
        return;
    }
    for (int i = startx; i < n; i++)
        dfs(m + 1, sum + ax[i], i + 1);
    return;
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &ax[i]);
    dfs(0, 0, 0);
    printf("%d\n", ans);
    system("pause");
    return 0;
}