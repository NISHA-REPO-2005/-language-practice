#include<stdio.h>
#include<string.h>

int isPresent(char str[], char ch);

int main(){
    char str[] = "Momooo";
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isPresent(str, ch)){
        printf("Present");
    }else{
        printf("Not Present");
    }
    return 0;

}

int isPresent(char str[], char ch) {
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i] == ch){
            return 1; // found
        }

    }
    return 0;
}
