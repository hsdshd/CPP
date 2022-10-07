#include <stdio.h>
#include <stdlib.h>
long N;
int ans;
int main(){
    printf("Enter N:");
    scanf("%ld",&N);
    for(long long i=1;i<N;i*=10)
        ans+=(N%(i*10)/i);
    printf("%d\n",ans);
    system("pause");
    return 0;
}
   