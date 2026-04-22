#include<stdio.h>
int main() {
    int age = 25;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("The difference is: %u\n", ptr-_ptr);
    *_ptr = &age;
    printf("The comparison is: %u\n", ptr=_ptr);

    return 0;
}
