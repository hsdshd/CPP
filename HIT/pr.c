#include <stdio.h>
#include <stdlib.h>
double f,c;
int main(){
    scanf("%lf",&f);
    c=5.0/9.0*(f-32.0);
    printf("%.2lf",c);
    system("pause");
}