#include<stdio.h>
#include<string.h>

typedef struct compEngineeringStudent {
    int roll;
    float cgpa;
    char name[100];
} ceo;

int main() {
    ceo s1;

    s1.roll = 1655;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Nisha");
    printf("CEO : %d\n%f\n%s\n", s1.roll, s1.cgpa, s1.name);

    return 0;
}
