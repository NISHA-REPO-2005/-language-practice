#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("Enter the value of a\n ");
    scanf("%d", &a);
    printf("Enter the value of b\n ");
    scanf("%d", &b);

    int S = sum(a,b);
    printf("The sum is: %d\n", S);
    return 0;
}

int sum(int a, int b) {

    return a+b;

}

