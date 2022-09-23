#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double n, ans;
int main() {
    while (scanf("%lf", &n) && (n < 1 || n > 100)) {
        printf("Invalid input!\n");
    }
    int cnt = 0;
    while (n >= 0.1) {
        ans += n;
        n /= 3;
        cnt++;
    }
    printf("%d,%.3lf\n", cnt, ans);

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++) {
            if (pow((int)sqrt(i * 1100 + 10 + j), 2) == i * 1100 + 10 + j)
                printf("31%d%d1%d\n", i, i, j);
        }
    system("pause");
    return 0;
}