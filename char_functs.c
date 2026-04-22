#include<stdio.h>

void printNamaste();
void printBonjour();

int main(){
    char ch;
    printf("Enter F for French and I for Indian...\n");
    scanf("%c", &ch);
    if(ch == 'F'){
        printBonjour();
    }else {
        printNamaste();
    }
    return 0;
}

void printBonjour(){
    printf("French!");
}
void printNamaste(){
    printf("Indian!");
}

