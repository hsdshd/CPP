#include <stdio.h>
#include <stdlib.h>
int x, y;
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
int main()
{
    printf("Enter a,b:");
    scanf("%d%d", &x, &y);
    printf("%d\n", gcd(x, y));
    system("pause");
    return 0;
}