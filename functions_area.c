#include<stdio.h>
#include<math.h>

void SquareArea(float side);
void CircleArea(float r);
void RectangularArea(float a, float b);

int main() {
    float side, r, a, b;
    printf("Enter a number : ");
    scanf("%f\n", &side);
    SquareArea(side);
    printf("The area of square is: %f", side);
    printf("Enter a number : ");
    scanf("%f\n", &r);
    CircleArea(r);
    printf("The area of circle is: %f", r);
    printf("Enter the value of a : ");
    printf("Enter the value of b : ");
    scanf("%f\n %f\n", &a, &b);
    RectangularArea(a,b);
    printf("The area of rectangle is: %f");
    return 0;
}

void SquareArea(float side){
    side = side * side;

}
void CircleArea(float r){
    r = 3.14*r*r;

}
void RectangularArea(float a, float b) {
    return a*b;
}
