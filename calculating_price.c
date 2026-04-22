#include<stdio.h>

void Calculate_price(float price);

int main() {
    float price = 100.00;
    Calculate_price(price);
    printf("The price is : %f\n", price);
    return 0;
}

void Calculate_price(float price) {
    price = price+(0.18*price);
    printf("The price is : %f\n", price);
}
