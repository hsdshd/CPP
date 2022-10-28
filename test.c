#include <stdio.h>
#include <stdlib.h>
void cnter(char a[]);

int main() {
    char sentence1[] = {"(CNN) -- Beijing hosted one of the most memorable "
                        "Summer Olympics in recent history -- now the Chinese "
                        "capital is hoping to welcome the world's top Winter "
                        "Games stars for the first time in a joint 2022 bid."};
    char sentence2[] = {
        "The 2008 host, along with the northern city of Zhangjiakou, is vying "
        "with several European cities after having officially entered the "
        "bidding, according to the Chinese Olympic Committee (COC)."};
    char sentence3[] = {
        "Beijing would stage the ice events, reports the country's state-run "
        "news agency Xinhua, while snow-based competitions would take place in "
        "Zhangjiakou."};
    int i = 1;
    cnter(sentence1);
    cnter(sentence2);
    cnter(sentence3);
    system("pause");
    return 0;
}
void cnter(char a[]) {
    int i;
    int capletter = 0, lowletter = 0, space = 0, number = 0, other = 0;
    for (i = 0; a[i] != '\0'; i++) {
        if ('A' <= a[i] &&a[i]<= 'Z')
            capletter++;
        if ('a' <= a[i] && a[i] <= 'z')
            lowletter++;
        if ('0' <= a[i] && a[i] <= '9')
            number++;
        if (a[i] == ' ')
            space++;
    }
    other = i - capletter - lowletter - number - space;
    printf("da%d,xiao%d,shuzi%d,kongge%d,qita%d\n",
           capletter, lowletter, number, space, other);
}
