#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char a[10]="Hello ",b[10]="world";
    scanf("%s%s",a,b);
    char *p=a+strlen(a);
    char *q=b;
    for(int i=0;i<strlen(b);p++,q++,i++){
        *p=*q;
    }
    system("pause");
    return 0;
}
//266-280,274--280