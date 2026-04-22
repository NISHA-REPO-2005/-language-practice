#include<stdio.h>
void printNumb(int arr[], int n);

int main(){
    int arr[] = {1,2,6,7,8,9};
    printNumb(arr,6);
    return 0;
}
void printNumb(int arr[], int n) {
    for(int i=0; i<=6; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}
