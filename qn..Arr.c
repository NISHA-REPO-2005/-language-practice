// Write a program to enter price of three items and print their final cost with gst...
#include<stdio.h>
int main() {
    float price[3];
    printf("Enter the price of item1: ");
    scanf("%f", &price[0]);

    printf("Enter the price of item2: ");
    scanf("%f", &price[1]);

    printf("Enter the price of item3: ");
    scanf("%f", &price[2]);

    printf("item1 = %f\n item2 = %f\n item3 = %f\n", price[0]+(0.18*price[0]), price[1]+(0.18*price[1]), price[2]+(0.18*price[2]));
    return 0;
}
