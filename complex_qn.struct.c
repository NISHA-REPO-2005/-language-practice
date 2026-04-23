// Create a structur eto store complex numbers..

#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main() {
    struct complex number = {5,8};
    struct complex *ptr = &number;

    printf("The real number is: %d\n", ptr->real);
    printf("The img number is: %d", ptr->img);

    return 0;
}
