// Make a program to input student information from a user and enter it to a file.
#include<stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "w");
    if(fptr == NULL) {
        printf("File not opened");
        return 1;
    }
    char name[100];
    int roll;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter roll: ");
    scanf("%d", &roll);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);


    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", roll);
    fprintf(fptr, "%f\n", cgpa);

    fclose(fptr);
    return 0;
}
