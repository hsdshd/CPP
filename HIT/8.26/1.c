#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double theta,theta2,R,x1,x2,y11,y2,a,b,c,a1,b1,alpha,m;
int main (){
    //printf("input theta and mass:");
    //scanf("%lf%lf",&theta,&m);
    //printf("%lf\n",m*9.8*cos(theta*3.14/180));

    printf("input theta:");
    scanf("%lf",&theta);
    if(theta>=0&&theta<=90)
        printf("%lf\n",9.8*sin(theta*M_PI/180));
    else 
        printf("invalid value!\n");

    printf("input theta and radius:");
    scanf("%lf%lf",&theta2,&R);
    if(theta2>=0&&theta2<=90)
        printf("%lf\n",theta2*M_PI/180*R*R/2);
    else 
        printf("invalid value!\n");

    printf("input x1,y1,x2,y2:");
    scanf("%lf%lf%lf%lf",&x1,&y11,&x2,&y2);
    printf("%lf\n",sqrt(pow(x1-x2,2)+pow(y11-y2,2)));

    printf("input a,b,c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    if ((b*b-4*a*c)>0)
    printf("x1=%lf\nx2=%lf\n",(-b+sqrt(b*b-4*a*c))/2/a,(-b-sqrt(b*b-4*a*c))/2/a);
    else if(b*b==4*a*c)
    printf("x1=x2=%lf\n",(-b+sqrt(b*b-4*a*c))/2/a);
    else 
    printf("x1=%lf+%lfi\nx2=%lf-%lfi\n",-b/2/a,sqrt(abs(b*b-4*a*c))/2/a,-b/2/a,sqrt(abs(b*b-4*a*c))/2/a);

    printf("input a,b,alpha:");
    scanf("%lf%lf%lf",&a1,&b1,&alpha);
    printf("%lf\n",sqrt(a1*a1+b1*b1-2*a1*b1*cos(alpha*M_PI/180)));

    srand(114514);
    int x=rand();
    printf("%d\n",x);

    system("pause");
    return 0;
}