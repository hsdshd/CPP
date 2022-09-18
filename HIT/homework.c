#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int max = -1, cnt = 0;
    for (int i = 0; i < 1430; i++)
        for (int j = 0; j < ceil((10000 - 7 * i) / 5); j++)
            for (int k = 0; k < ceil((10000 - 7 * i - j * 5) / 4); k++)
            {
                if (i * 7 + j * 5 + k * 4 == 10000)
                    cnt++;
                if (i * 0.4 + j * 0.56 + k * 0.48 > max)
                    max = i * 0.4 + j * 0.56 + k * 0.48;
            }
    printf("%d\n%d",cnt,max);

    int n=0;
    for(int i=1;i<=10;i++){
        n*=2;
        n++;
    }
    printf("%d\n",n);

    int x=2;
    for(int i=1;i<=7;i++){
        x++;
        x*=2;
    }
    printf("%d\n",x);

    int a=10;
    for(int i=1;i<=4;i++){
        a+=2;
    }
    printf("%d",a);

    system("pause");
    return 0;
}