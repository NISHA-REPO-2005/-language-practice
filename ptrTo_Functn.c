#include<stdio.h>
void square(int n);
void _square(int* n);

int main() {
    int numb = 4;
    square(numb);
    printf("Number = %d\n", numb);

    _square(&numb);
    printf("Number = %d\n", numb);

    return 0;
}
// Call by value
void square(int n) {
    n = n*n;
    printf("Square = %d\n", n);
}
// Call by refference
void _square(int* n){
    *n = (*n) * (*n);
    printf("_Square = %d\n", *n);
}
