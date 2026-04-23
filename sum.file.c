// a and b written in a file write a program to replace them with their sum...
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "w");

    fprintf(fptr, "%d", a+b);
    fclose(fptr);

    return 0;
}
