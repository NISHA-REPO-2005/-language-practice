#include<stdio.h>
#include<string.h>

void string(char arr[]);

int main(){
    char firstStr[] = "Hello";
    char secondStr[] = " World";

    strcat(firstStr, secondStr);
    puts(firstStr);
    return 0;
}


