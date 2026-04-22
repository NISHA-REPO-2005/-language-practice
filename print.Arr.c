#include<stdio.h>
/*int main() {
    int marks1 = 25;
    int marks2 = 36;
    int marks3 = 96;

    int marks[] = {25, 36, 96};

    printf("Marks is : %d\n", marks[0]);
    printf("Marks is : %d\n", marks[1]);
    printf("Marks is : %d", marks[2]);
    return 0;
}
*/

int main() {
    int marks[] = {25, 36, 96};

    for(int i=0; i<3; i++){
        printf("Marks%d = %d\n", i+1, marks[i]);
    }
    return 0;
}
