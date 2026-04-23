// Write a program to write all the odd numbers from 1 to n in a file...
#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "w");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        if(i%2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
