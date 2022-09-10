#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n;
char a='*';
int main(){
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n*2;j++)
        if(j==2*n)
            printf("\n");
        else if(abs(j-n)>=i)
            printf("    ");
        else printf("%4c",a);    
    system("pause");
    return 0;
}
   
    