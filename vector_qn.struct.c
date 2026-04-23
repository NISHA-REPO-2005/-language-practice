// Create a structure to store vectors. then make a function to return sum of 2 vectors.

#include<stdio.h>

struct vector{
    int x;
    int y;
};

void calSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct vector v1 = {5, 10};
    struct vector v2 = {6, 8};
    struct vector sum = {0};

    calSum(v1, v2, sum);
    return 0;
}

void calSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v2.y + v1.y;

    printf("Sum is: %d\n%d", sum.x,sum.y);
}
