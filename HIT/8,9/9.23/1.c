#include <stdio.h>
#include <stdlib.h>
int ax[101], n, x;
void swap(int ax[], int n);
void choose(int ax[], int n);
void bubble(int * const p, int n);
int binarySearch(int ax[], int l, int x);
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &ax[i]);
    bubble(ax, n);
    for (int i = 0; i < n; i++)
        printf("%d\n", ax[i]);
    scanf("%d", &x);
    printf("%d\n", binarySearch(ax, n, x));
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

int binarySearch(int ax[], int l, int x) {
    int left = 0, right = l - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (ax[mid] > x)
            left = mid + 1;
        else if (ax[mid] < x)
            right = mid - 1;
        else
            break;
    }
    if (left > right)
        return -1;
    else
        return mid + 1;
}
