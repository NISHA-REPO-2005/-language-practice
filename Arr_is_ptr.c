#include<stdio.h>
int main() {
    int aadhar[10];
    int *ptr = &aadhar[0];

    for(int i=0; i<=10; i++){
        printf("Index: ");
        scanf("%d", &aadhar[i]);
    }
    return 0;
}
