/*#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "w");

    if(fptr == NULL) {
        printf("File doesn't exist\n");
    }else{

        fclose(fptr);
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "w");

    /*
    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    */
    /*fputs("M", fptr);
    fputs("a", fptr);
    fputs("n", fptr);
    fputs("g", fptr);
    fputs("o", fptr);*/

    fputs("Mango", fptr);

    fclose(fptr);

    return 0;
}
