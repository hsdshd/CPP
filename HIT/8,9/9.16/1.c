#include <stdio.h>
#include <stdlib.h>
int f(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    double x = 3000;
    for (int i = 1; i <= 48; i++)
    {
        x = x / 1.05 + 3000;
    }
    printf("%d\n", x);
    system("pause");
    return 0;
}
int f(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return f(n - 1) + f(n - 2);
}