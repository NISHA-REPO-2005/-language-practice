#include<stdio.h>
int calculatePercentage(int sc, int math, int sans);

int main() {
    int sc = 98;
    int math = 65;
    int sans = 78;
    printf("The percentage is: %d", calculatePercentage(sc,math,sans));
    return 0;
}

int calculatePercentage(int sc, int math, int sans) {
    return((sc+math+sans)/3);
}
