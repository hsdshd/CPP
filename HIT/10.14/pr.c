#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp1, *fp2;
    fp1 = fopen("in.txt", "r");
    fp2 = fopen("out.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
        exit(-1);
    int *p = NULL;
    p = (int *)malloc(sizeof(int) * 10);
    if (p == NULL) {
        printf("err");
        exit(-1);
    }
    for (int i = 0; i < 10; i++)
        fscanf(fp1, "%d", p + i);
    for (int i = 0; i < 10; i++)
        fprintf(fp2, "%d ", *(p + i));
    free(p);
    fclose(fp1);
    fclose(fp2);
    system("pause");
    return 0;
}