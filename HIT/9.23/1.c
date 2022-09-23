#include <stdio.h>
#include <stdlib.h>
int ax[101], n;
void swap(int ax[], int n);
void choose(int ax[], int n);
void bubble(int ax[], int n);
void binarySearch(int ax[], int n);
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &ax[i]);
    bubble(ax, n);
    for (int i = 0; i < n; i++)
        printf("%d\n", ax[i]);
    system("pause");
    return 0;
}
void swap(int ax[], int n) {
    int tmp;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (ax[j] > ax[i]) {
                tmp = ax[i];
                ax[i] = ax[j];
                ax[j] = tmp;
            }
}
void choose(int ax[], int n) {
    int k, temp;
    for (int i = 0; i < n - 1; i++) {
        k = i;
        for (int j = i + 1; j < n; j++)
            if (ax[j] < ax[k])
                k = j;
        if (k != i) {
            temp = ax[k];
            ax[k] = ax[i];
            ax[i] = temp;
        }
    }
}
void bubble(int ax[], int n) {
    int tmp, flag = 1;
    do {
        flag = 1;
        for (int i = 0; i < n; i++) {
            if (ax[i + 1] > ax[i]) {
                flag = 0;
                tmp = ax[i];
                ax[i] = ax[i + 1];
                ax[i + 1] = tmp;
            }
        }
    } while (flag == 0);
}
void binarySearch(int ax[], int n) {
    
}
