#include<stdio.h>
int main() {
    int age = 30;
    int *ptr = &age;

    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u", ptr);
    return 0;

}
