// Replace the data in file with number of vowels in the string....
#include<stdio.h>

int main() {
    FILE *fptr;
    char str[100];
    int count = 0;

    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "r");

    if(fptr == NULL) {
        printf("File not found");
        return 1;
    }

    fgets(str, sizeof(str), fptr);
    fclose(fptr);

    for(int i=0; str[i]!= '\0'; i++) {
        if(str[i]== 'a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u'||str[i]== 'A'||str[i]== 'E'||str[i]== 'I'||str[i]== 'O'||str[i]== 'U');
        count++;
        }

    fptr = fopen("C:/Users/USER/OneDrive/Desktop/file.txt", "w");

    fclose(fptr);
    return 0;
}
