#include <stdio.h>
#include <stdlib.h>
int main(){
    for(int i=0;i<10;i++)
        for(int j=0;j<=10;j++)
        if(j==10)
            printf("\n");
        else if(i==0){
            if(j==0)
                printf("%4c",'*');
            else
                printf("%4d",j);
        }
        else if(j==0)
            printf("%4d",i);
        else if(j==10)
            printf("\n");
        else if(j<i)
            printf("    ");
        else
            printf("%4d",i*j);
    system("pause");
    return 0;
}
   
    