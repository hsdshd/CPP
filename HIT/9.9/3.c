#include <stdio.h>
#include <stdlib.h>
int n;
int f(int n)
{
    static unsigned long long ans = 1;
    ans *= n;
    return ans;
}
int main()
{
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d!=%llu\n", i, f(i));
    system("pause");
    return 0;
}