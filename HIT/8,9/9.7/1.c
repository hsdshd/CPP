#include <stdio.h>
#include <stdlib.h>
int N,n;
int main(){
    for(int x=0;x<10;x++)
        for(int y=0;y<10;y++)
            for(int z=0;z<10;z++)
                if((x*100+y*110+z*12)==532)
    printf("x=%d    y=%d    z=%d\n",x,y,z);
    system("pause");
    return 0;
}