#include<stdio.h>
int main() {
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5; // x+5 = 0+5 = 5
    printf("X = %d\n", x);
    printf("ptr = %d\n", *ptr);

    (*ptr)++; // *ptr+1 = x+1 = 5+1 = 6
    printf("X = %d\n", x);
    printf("ptr = %d\n", *ptr);

    return 0;
}

