// Find the salted form of a password entered by user if salt is "123" amd added at the end...OR salting..

#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main() {
    char password[100];
    scanf("%s", password);
    salting(password);

    return 0;
}
void salting(char password[]) {
    char salt[] = "123";
    char newpassword[150];

    strcpy(newpassword,password);
    strcat(newpassword, salt);
    puts(newpassword);
}
