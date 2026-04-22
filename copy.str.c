#include<stdio.h>
#include<string.h>

void printString(char arr[]);

int main(){
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";

    strcpy(newstr,oldstr);
    puts(newstr);
}
