// Write a function slice, which takes a string and returns a sliced string from index n to m...

#include<stdio.h>
#include<string.h>

void slice(char slicing[], int n, int m);

int main(){
    char slicing[] = "HelloWorld";
    slice(slicing, 3, 6);
    return 0;
}

void slice(char slicing[], int n, int m) {
    char newslicing[100];
    int j=0;
    for(int i=n; i<=m; i++, j++) {
        newslicing[j] = slicing[i];
    }
    newslicing[j] = '\0';
    puts(newslicing);
}
