/*#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "r");

    if(fptr == NULL) {
        printf("File doesn't exist\n");
    }else{
        printf("File opened successfully\n");
        fclose(fptr);
    }
    return 0;
}
*/

#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character : %c\n", ch);

    fclose(fptr);
    return 0;
}

