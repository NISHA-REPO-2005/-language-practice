#include<stdio.h>
void swap(int a, int b);
void _swap(int* p, int* q);

int main() {
    int x = 5;
    int y = 7;
    int p = 45;
    int q = 90;

    swap(x,y);
    printf("a = %d\nb = %d\n", x, y);

    _swap(p,q);
    printf("p = %d\nb = %d\n", p, q);

    return 0;
}
// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d\n b = %d\n", a, b);
}
// call by refference
void _swap(int* p, int* q) {
    int t = p;
    p = q;
    q = t;
    printf("p = %d\nq = %d\n", p, q);
}
