// Will the address output be the same?

#include<stdio.h>
void printAddress(int n);
void _printAddress(int* n);

int main() {
    int n = 4;
    printf("%p\n", &n);
    printAddress(n);

    printf("%u\n", &n);
    _printAddress(&n);

    return 0;
}
// call by value...
void printAddress(int n) {
    printf("%p\n", &n);
}
// Address of both the outputs will be different....

// call by refference...
void _printAddress(int* n) {
    printf("The address is : %u\n", n);
}
// Address of both the outputs will be the same....
