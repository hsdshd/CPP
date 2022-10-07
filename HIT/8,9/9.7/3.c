#include <stdio.h>
#include <stdlib.h>
int N,s,i;
int main(){
    printf("Enter N:");
    scanf("%d",&N);
    while(s<=N){
        i++;
        if(i%2==1)
        s+=i;
        else
        s-=i;
    }
    printf("%d\n",i);
    system("pause");
    return 0;
}
   