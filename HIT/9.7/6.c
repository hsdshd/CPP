#include <stdio.h>
#include <stdlib.h>
float a,b,d, ans;
int main(){
    printf("Enter a,b,d:");
    scanf("%f%f%f",&a,&b,&d);
    for(float i=a;i<b;i+=d)
        ans+=d*(i*i+5*i+1);
    printf("%lf",ans);
    system("pause");
    return 0;
}
   
    