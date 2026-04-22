//Example
/*#include<stdio.h>
int main() {
    //char name[] = {'m','o','m','o'};
    char name[] = "momo";
    return 0;
}
*/

// Create a string firstname and lastname to store details of user and print all the characters using a loop...

#include<stdio.h>

void printString(char arr[]);

int main() {
    char firstname[] = " Nisha";
    char lastname[] = " Yadav";

    printString(firstname);
    printString(lastname);

    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i]!='\0'; i++) {
        printf("%c", arr[i]);
    }
}
