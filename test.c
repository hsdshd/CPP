#include <stdio.h>
#include <stdlib.h>
int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    int c=(int)(b-a)/0.1;
    printf("%d\n",c);
    system("pause");
    return 0;
}
