/* int arr[] = {1,2,3,4,5}
Find:
(a) *(arr+2)
(b) *(arr+5)
*/

#include<stdio.h>
int countNumb(int arr[], int n);

int main() {
    int arr[] = {1,2,3,4,5};
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+5));

    return 0;
}

//Outputs are 3 and 0 respectively...
