/*#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}
*/

#include<stdio.h>
int main() {
    int age = 25;
    int *ptr = &age;

    printf("%d\t", age);
    printf("%d\t", *ptr);
    printf("%d\t", *(&age));

    return 0;
}

