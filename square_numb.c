#include<stdio.h>
#include<math.h>

void Calculate_square(int square);

int main(){
    int square;
    printf("Enter a number u want to square: ");
    scanf("%d", &square);

    Calculate_square(square);
    return 0;
}

void Calculate_square(int square) {
    square = pow(square,2);
    printf("The square of the number is: %d", square);
}
