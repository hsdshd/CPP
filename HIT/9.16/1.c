#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int f(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    system("pause");
    return 0;
}
int f(int n){
    if(n==1||n==2)
    return 1;
    else return f(n-1)+f(n-2);
}