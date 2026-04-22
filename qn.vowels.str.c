// Write a function to count the occurrence of vowels in a string...
#include<stdio.h>
#include<string.h>

int countVowels(char vow[]);

int main(){
    char vow[100];
    fgets(vow, 100, stdin);
    int result = countVowels(vow);
    printf("The number of abhivowel is %d", result);
    return 0;
}

int countVowels(char vow[]) {
    int count = 0;
    for(int i=0; vow[i] != '\n'; i++){
        if(vow[i]=='a'||vow[i]=='e'||vow[i]=='i'||vow[i]=='o'||vow[i]=='u'||vow[i]=='A'||vow[i]=='E'||vow[i]=='I'||vow[i]=='O'||vow[i]=='U'){
            count++;
            printf("The vowel is %c\n", vow[i]);
        }
    }
    return count;

}
