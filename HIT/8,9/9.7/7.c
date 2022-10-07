#include <stdio.h>
#include <stdlib.h>
float a,b,d, ans;
float f(float x){
    return x*x+5*x+1;
}
int main(){
    printf("Enter a,b,d:");
    scanf("%f%f%f",&a,&b,&d);
    for(float i=a;i<b;i+=d)
        ans+=d*f(i);
    printf("%lf",ans);
    system("pause");
    return 0;
}