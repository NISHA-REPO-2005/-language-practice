#include<stdio.h>
#include<string.h>

void printString(char arr[]);

int main() {
    char fisrtStr[] = "hah";
    char secStr[] = "hhb";

    printf("%d", strcmp(fisrtStr,secStr));
    return 0;
}
