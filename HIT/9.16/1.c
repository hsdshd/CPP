#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool pd(int n);
int main()
{
    for (int i = 0; i <= 20; i++)
        for (int j = 0; j <= 33; j++)
            if (i * 5 + j * 3 + (100 - i - j) / 3.0 == 100)
                printf("%d\n%d\n%d\n\n", i, j, (100 - i - j));
    system("pause");
    return 0;
}
