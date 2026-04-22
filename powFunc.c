// LOOPS
/*#include<stdio.h>

int power(int n, int x);

int main() {
    int n = 2, x = 3;
    printf("The power is: %d", power(n,x));
    return 0;
}

int power(int n, int x) {
    int result = 1;
    for(int i=1; i<=n; i++){
        result = result*x;
    }
    return result;
}
*/
//Recursive function
#include<stdio.h>
 int power(int n, int x);

 int main() {
     printf("Result : %d", power(2,3));
     return 0;
}

int power(int n, int x) {
    if(x==0) {
        return 1;
    }
    return n*power(n, x-1);
}
