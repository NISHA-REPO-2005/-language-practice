// Print the marks of physics, chemistry and maths...
#include<stdio.h>
int main() {
    int marks[3];
    printf("Enter the marks of Physics: ");
    scanf("%d", &marks[0]);

    printf("Enter the marks of Chemistry: ");
    scanf("%d", &marks[1]);

    printf("Enter the marks of Maths: ");
    scanf("%d", &marks[2]);

    printf("Physics = %d\n Chemistry = %d\n Maths = %d\n", marks[0], marks[1], marks[2]);
    return 0;
}
