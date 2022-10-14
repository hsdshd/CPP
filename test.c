#include <stdio.h>
int main(){
    int n,a;
    double sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%.2lf\n",sum/n);
    return 0;
}
