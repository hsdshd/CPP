#include <stdlib.h>
#include <stdio.h>
int n,cnt;
int p(int n){
    if(n<=2)return 1;
    return p(n-1)+p(n-2);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("%d\n",p(i));

    system("pause");
    return 0;
}