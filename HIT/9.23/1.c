#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==1)return 1;
    return n*f(n-1);
}
int ax[101];
int main() {
    //for (int i = 0; i < 100; i++)
    //    scanf("%d", &ax[i]);
    printf("%d",f(5));
    system("pause");
    return 0;
}