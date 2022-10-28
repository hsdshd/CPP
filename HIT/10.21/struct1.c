#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    char name[233];
    int a, b, c, d;
    long long num;
    char date[15];
} STU;
STU a[10];
FILE *fp1, *fp2;
void readStruct() {
    if (fp1 == NULL || fp2 == NULL) {
        fprintf(fp2, "Unable to open file!\n");
        exit(-1);
    }
    for (int i = 0; i < 4; i++)
        fscanf(fp1, "%lld,%s,%d/%d/%d,%d,%d,%d,%d", &a[i].num, a[i].name,
               a[i].date, &a[i].a, &a[i].b, &a[i].c, &a[i].d);
}
void sortStruct() {
    int tmp;
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            if (a[j].num < a[i].num) {
                a[4] = a[i];
                a[i] = a[j];
                a[j] = a[4];
            }
}
void printStruct() {
    for (int i = 0; i < 1; i++)

        fprintf(fp2, "%lld,%s,%s,%d,%d,%d,%d\n", a[i].num, a[i].name, a[i].date,
                a[i].a, a[i].b, a[i].c, a[i].d);
}
int main() {
    fp1 = fopen("student.txt", "r");
    fp2 = fopen("out.txt", "w");
    readStruct();
    fclose(fp1);
    sortStruct();
    printStruct();
    fclose(fp2);
    return 0;
}