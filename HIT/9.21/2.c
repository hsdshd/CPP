#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ax[101], n, m;
void randArray(int num[], int n) {
    for (int i = 0; i < n; i++)
        num[i] = rand() % 100;
}
void average(int a[], int n) {
    float tmp = 0;
    for (int i = 0; i < n; i++)
        tmp += a[i];
    //    printf("average=%f\n", tmp / n);
    m = tmp / n;
}
void standard(int a[], int n) {
    float tmp = 0;
    for (int i = 0; i < n; i++)
        tmp += (m - a[i]) * (m - a[i]);
    printf("standard=%f\n", tmp / n);
}
void rand_count(int a[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 50)
            cnt++;
    }
    printf("count=%d\n", cnt);
}
int main() {
    n = 100;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        randArray(ax, n);
        rand_count(ax, n);
        average(ax, n);
        standard(ax, n);
    }
    system("pause");
    return 0;
}