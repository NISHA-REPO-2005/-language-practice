/*#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;

    printf("%d\n", &age);
    printf("%d\n", ptr);
    printf("%d\n", &ptr);
    printf("%d\n", age);

    return 0;
}
*/

#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    printf("%d\t", age);
    printf("%d\t", *ptr);
    printf("%d\t",*(&age));
    return 0;
}
