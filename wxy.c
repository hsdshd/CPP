#include "stdio.h"
#include "stdlib.h"
#define N 10
static void base_convert(void) {
    int num, base;
    int n[128];
    int i = 0;

    printf("please enter the coverted num:");
    scanf("%d", &num); //输入任意的十进制
    printf("please enter the base:");
    scanf("%d", &base); //输入想要转的进制

    do {
        n[i] = num % base; //取余
        num = num / base;
        i++;
    } while (num != 0);

    for (i--; i >= 0; i--) {
        if (n[i] >= 10)
            printf("%c", n[i] - 10 + 'A');
        else
            printf("%d", n[i]);
    }
    printf("\n");
}

int main() {
    base_convert();
    system("pause");
    exit(0);
}