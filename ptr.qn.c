// Write a functiomn to calculate a sum product and address...

#include<stdio.h>
void dowork(int a, int b, int* sum, int* product, int* avg);

int main() {
    int a = 6 , b = 9;
    int sum, product, avg;
     dowork(a, b, &sum, &product, &avg);
    printf("Sum = %d\n Product = %d\n Avg = %d\n", sum,product,avg);
    return 0;
}

void dowork(int a, int b, int* sum, int* product, int* avg) {
    *sum = a + b;
    *product = a * b;
    *avg = (a + b)/2;
}
