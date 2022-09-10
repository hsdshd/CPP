#include <stdio.h>
#include <stdlib.h>
float mile,p,c,a,b,r; 
int main(){
    printf("input miles\n");
    scanf("%f",&mile);
    printf("%fkm\n",mile*1.6093440);
    
    printf("input pounds\n");
    scanf("%f",&p);
    printf("%fb\n",p/2.2051);

    printf("input TC\n");
    scanf("%f",&c);
    printf("%fTF\n",(c*9)/5+32);

    printf("input a and b\n");
    scanf("%f%f",&a,&b);
    printf("%f\n",a*b);

    printf("input radius\n");
    scanf("%f",&r);
    printf("S=%f\nC=%f\n",r*r*3.14,2*3.14*r);
    system("pause");
    return 0;
}