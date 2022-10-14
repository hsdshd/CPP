#include <cstdio>

int main() {
    int n, x, flag;
    char c[15];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        flag = 1;
        scanf("%d", &x);
        scanf("%s",&c);
        for (int i = 0; i < x; i++) {
            if(c[i]=='t'||c[i]>='A'&&c[i]<='Z'&&c[i]!='T')
                flag = 0;
        }
        if (flag == 1 && x == 5)
            printf("Yes\n");
        else
            printf("NO\n");
    }
    system("pause");
    return 0;
}