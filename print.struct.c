#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;

    s1.roll = 22660;
    s1.cgpa = 9.2;
    // s1.name = "nisha"; -> it'll show an error so...
    strcpy(s1.name, "nisha");

    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student cgpa: %d\n", s1.cgpa);

    return 0;
}
