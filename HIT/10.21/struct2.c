#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct student {
    char name[5];
    char gender;
    long long num;
    char company[5];
} STU;
STU a[10];
FILE *fp1, *fp2;
void readStruct() {
    if (fp1 == NULL || fp2 == NULL) {
        fprintf(fp2, "Unable to open file!\n");
        exit(-1);
    }
    for (int i = 0; i < 7; i++)
        fscanf(fp1, "%s %c %lld %s", a[i].name, &a[i].gender, &a[i].num,
               a[i].company);
}
void sortStruct() {
    int tmp;
    for (int i = 0; i < 7; i++)
        for (int j = i + 1; j < 7; j++)
            for (int k = 0; k < fmin(strlen(a[j].name), strlen(a[i].name));k++)
                if (strcmp(a[j].name , a[i].name)<0) {
                    a[7] = a[i];
                    a[i] = a[j];
                    a[j] = a[7];
                    break;
                }
}
void printStruct() {
    for (int i = 0; i < 7; i++)
        fprintf(fp2, "%s %c %lld %s\n", a[i].name, a[i].gender, a[i].num,
                a[i].company);
}
int main() {
    fp1 = fopen("contact1.txt", "r");
    fp2 = fopen("out.txt", "w");
    readStruct();
    fclose(fp1);
    sortStruct();
    printStruct();
    fclose(fp2);
    return 0;
}