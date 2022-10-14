#include <stdio.h>
#include <stdlib.h>
int m, n, p;
int main() {
    FILE *fp1, *fp2;
    fp1 = fopen("in.txt", "r");
    fp2 = fopen("out.txt", "w");
    if (fp1 == NULL || fp2 == NULL) {
        fprintf(fp2, "Unable to open file!\n");
        exit(-1);
    }
    fscanf(fp1, "%d%d%d", &m, &n, &p);
    double *p1 = NULL, *p2 = NULL, *p3 = NULL;
    p1 = (double *)malloc(sizeof(double) * m * n);
    p2 = (double *)malloc(sizeof(double) * n * p);
    p3 = (double *)malloc(sizeof(double) * m * p);
    if (p1 == NULL || p2 == NULL || p3 == NULL) {
        fprintf(fp2, "Unable to allocate memory!\n");
        exit(-2);
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fscanf(fp1, "%lf", p1 + n * i + j);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            fscanf(fp1, "%lf", p2 + p * i + j);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < p; k++)
                *(p3 + i * p + k) += *(p1 + n * i + j) * *(p2 + p * j + k);
    free(p1);
    free(p2);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            fprintf(fp2, "%lf ", *(p3 + p * i + j));
        fprintf(fp2, "\n");
    }
    free(p3);
    fclose(fp1);
    fclose(fp2);
    //system("pause");
    return 0;
}