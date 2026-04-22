#include<stdio.h>

void countTable(int arr[][10], int n, int m, int number);

int main() {
    int tables[2][10];
    countTable(tables,0,10,3);
    countTable(tables,1,10,2);

    for(int i=0; i<10; i++){
        printf("%d\n", tables[0][i]);
    }
    for(int i=0; i<10; i++) {
        printf("%d\t", tables[1][i]);
    }
    return 0;
}

void countTable(int arr[][10], int n, int m, int number) {
    for (int i=0; i<m; i++) {
        arr[n][i] = number * (i+1);
    }
}
