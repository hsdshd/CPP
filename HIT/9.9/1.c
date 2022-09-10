#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n;
bool pd(int a){
    if(a==1)
        return false;
    for(int i=2;i*i<=a;i++)
        if(a%i==0)
            return false;
    return true;
}
int main(){
    printf("Enter n:");
    scanf("%d",&n);
    if(pd(n))
    printf("prime\n");
    else 
    printf("Not prime\n");
    system("pause");
    return 0;
}