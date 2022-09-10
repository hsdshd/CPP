#include <stdio.h>
#include <stdlib.h>
int n,flag;
int mkrandom();
int guess(int n,int x);
int main(){
    do{
        scanf("%d",&n);
        guess(n,x);
    }while(!flag);
    system("pause");
    return 0;
}
int mkrandom(){
    srand(time(0));
    return rand();
}
int guess(int n,int x){
    x = mkrandom();
    if(n>x)
        printf("too big!\n");
    else if(n<x)
        printf("Too small!\n");
    else
        flag =1;
}