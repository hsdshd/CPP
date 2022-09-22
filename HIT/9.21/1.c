#include <stdlib.h>
#include <stdio.h>
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
int qb(int a)
{
    if (a == 1)
        return 1;
    else
        return qb(a - 1) * 2 + 1;
}
int qc(int a){
    if(a==7)
    return 2;
    else 
    return (qc(a+1)+1)*2;
}
int qd(int a){
    if(a==1)
    return 10;
    else
    return qd(a-1)+2;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("gcd=%d\n", gcd(a, b));

    printf("%d\n", qb(10));

    printf("%d\n",qc(1));

    printf("%d\n",qd(5));
    system("pause");
    return 0;
}