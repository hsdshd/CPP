#include <stdio.h>
#include <stdlib.h>
int ax[101], n;
void swap(int ax[], int n);
void choose(int ax[], int n);
void insert(int ax[], int n);

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
void insert(int ax[], int n) {
    int a[n], m = -1, k;
    for (int i = 0; i < n; i++) {
        m = -1;
        for (int j = 0; j < n; j++) {
            if (ax[j] > m) {
                m = ax[j];
                k = j;
            }
        }
        a[i] = m;
        ax[k] = 0;
    }
    for (int i = 0; i < n; i++)
        ax[i] = a[i];
}