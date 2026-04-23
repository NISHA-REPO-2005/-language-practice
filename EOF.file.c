#include<stdio.h>

/*int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "r");

    char ch;
    ch = fgetc(fptr);
    while(ch!=EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

    return 0;
}
*/
int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "r");

    int numb;
    numb = fgetc(fptr);
    while(numb!=EOF) {
        printf("%d", numb);
        numb = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}
