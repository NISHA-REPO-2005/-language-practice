#include<stdio.h>
int main() {
    int marks [2][3]; // 2*3
    marks[0][0] = 90;
    marks[0][1] = 59;
    marks[0][2] = 86;

    marks[0][1] = 96;
    marks[1][1] = 98;
    marks[1][2] = 72;

    printf("%d\n", marks[0][0]);//............
    return 0;
}
