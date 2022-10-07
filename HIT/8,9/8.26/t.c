#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double theta,theta2,R,x1,x2,y11,y2,a,b,c,a1,b1,alpha;
int main (){
    scanf("%lf%lf%lf%lf",&x1,&y11,&x2,&y2);
    printf("%lf\n",sqrt(pow(x1-x2,2)+pow(y11-y2,2)));
    system("pause");
    return 0;
}