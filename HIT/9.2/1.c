#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double a,b,c,height,weight,t,stw,dif;
int gender,n,cnt;
void tz(){
    printf("Input gender(1 for male,0 for female),height and weight:");
    scanf("%d%lf%lf",&gender,&height,&weight);
    if (gender==1)
    stw=(height-100)*0.9;
    else  stw=(height-100)*0.9-2.5;
    dif=abs(weight-stw)/stw;
    if(dif>0.2)
    cnt++;
}
int main(){
    printf("Input a,b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a!=0){
    if ((b*b-4*a*c)>0)
        printf("x1=%lf\nx2=%lf\n",(-b+sqrt(b*b-4*a*c))/2/a,(-b-sqrt(b*b-4*a*c))/2/a);
    else if(b*b==4*a*c)
        printf("x1=x2=%lf\n",(-b+sqrt(b*b-4*a*c))/2/a);
    else 
        printf("x1=%lf+%lfi\nx2=%lf-%lfi\n",-b/2/a,sqrt(abs(b*b-4*a*c))/2/a,-b/2/a,sqrt(abs(b*b-4*a*c))/2/a);
    }
    else if(b==0)
        printf("No solution!\n");
    else
        printf("%lf\n",-c/b);

    printf("Input gender(1 for male,0 for female),height and weight:");
    scanf("%d%lf%lf",&gender,&height,&weight);
    if (gender==1)
        printf("Standard height=%lfkg\n",(height-100)*0.9);
    else  
        printf("Standard height=%lfkg\n",(height-100)*0.9-2.5);

    printf("Input the number of people:");
    scanf("%d",&n);
    if(n<=50)
    t=58*n;
    else if (n<=100)
    t=58*n*0.9;
    else if(n<=150)
    t=58*n*0.85;
    else if(n<=200)
    t=58*n*0.8;
    else 
    t=58*n*0.75;
    printf("The price is %lf yuan\n",t);

    printf("Input the number of people:");
    scanf("%d",&n);
    switch ((n-1)/50)
    {
        case(0):
        t=58*n;
        break;
        case(1):
        t=58*n*0.9;
        break;
        case(2):
        t=58*n*0.85;
        break;
        case(3):
        t=58*n*0.8;
        break;
        default:
        t=58*n*0.75;
        break;
    }
    printf("The price is %lf yuan\n",t);

    printf("Input gender(1 for male,0 for female),height and weight:");
    scanf("%d%lf%lf",&gender,&height,&weight);
    if (gender==1)
    stw=(height-100)*0.9;
    else  stw=(height-100)*0.9-2.5;
    dif=(weight-stw)/stw;
    if(dif<-0.1)
    printf("too thin");
    else if(dif<=0.1&&dif>=-0.1)
    printf("normal\n");
    else if(dif<=0.2)
    printf("overweight\n");
    else if(dif<=0.3)
    printf("fat\n");
    else if(dif<=0.5)
    printf("fatter\n");
    else 
    printf("fattest\n");

    for(int i=0;i<10;i++)
    tz();
    printf("The ratio is %d0%%\n",cnt);

    system("pause");
    return 0;
}