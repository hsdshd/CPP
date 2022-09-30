#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a;
int main() {
    printf("Press a key and then press Enter:");
    a=getchar();
    printf("%c, %d\n", a - 32,a-32);
    system("pause");
    return 0;
}