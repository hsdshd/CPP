#include <iostream>
#include <string.h>
using namespace std;
int n, ax[100005];
char s[10];
bool is_prime(int a) {
    if(a==1)return 0;
    if(a==2)return 1;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &ax[i]);
    for (int i = 0; i < n; i++)
        if (is_prime(ax[i]))
            printf("%d ", ax[i]);
    system("pause");
    return 0;
}