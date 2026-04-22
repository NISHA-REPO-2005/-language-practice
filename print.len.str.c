// Make a program that inputs user's name and print it's length...
/*#include<stdio.h>

int countLen(char arr[]);

int main() {
    char name[100];
    fgets(name, 100, stdin);
    for(int i=0; name[i]!='\0'; i++) {
        if(name[i]=='\n'){
            name[i]= '\0';
            break;
        }
    }
    printf("Length is %d", countLen(name));
    return 0;
}

int countLen(char arr[]) {
    int count = 0;
    for(int i=0; arr[i]!= '\0'; i++) {
        count ++;
    }
    return count;
}
*/
//standard library function -> <string.h> -> strlen(str)-> count no. of characters excluding '\0'....

// OR
#include<stdio.h>
#include<string.h>

int countlen(char arr[]);

int main() {
    char name[] = "Nisha";

    int length = strlen(name);
    printf("The length is: %d", length);

    return 0;
}

int countlen(char arr[]) {
    int count = 0;
    for(int i=0; arr[i]!= '\0'; i++){
        count++;
    }
    return count-1;
}

