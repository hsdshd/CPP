#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int max = -1, cnt = 0, a, b, c;
    for (int i = 0; i < 1430; i++)
        for (int j = 0; j <= (10000 - 7 * i) / 5; j++)
            for (int k = 0; k <= (10000 - 7 * i - j * 5) / 4; k++)
            {
                if (i * 7 + j * 5 + k * 4 <= 10000)
                {
                    cnt++;
                    if (i * 0.4 + j * 0.56 + k * 0.48 > max)
                    {
                        max = i * 0.4 + j * 0.56 + k * 0.48;
                        a = i;
                        b = j;
                        c = k;
                    }
                }
            }
    printf("there are %d combinations in  total\nA=%4dB=%4dC=%4d\nbenifit=%d\n", cnt, a, b, c, max);

    int n = 1;
    for (int i = 1; i < 10; i++)
    {
        n *= 2;
        n++;
    }
    printf("there will be %d cells after 10 days\n", n);

    int x = 2;
    for (int i = 7; i >= 1; i--)
    {
        x++;
        x *= 2;
        printf("sell %d ducks at day %d\n", x / 2 + 1, i);
    }
    printf("initially he had %d ducks\n", x);

    a = 10;
    for (int i = 1; i <= 4; i++)
    {
        a += 2;
    }
    printf("the fifth person is %d years old\n", a);

    system("pause");
    return 0;
}