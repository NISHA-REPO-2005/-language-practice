// Write a program to store data of three students...
/*
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
    printf("Student cgpa: %f\n", s1.cgpa);

    struct student s2;

    s2.roll = 22661;
    s2.cgpa = 9.8;
    // s1.name = "nisha"; -> it'll show an error so...
    strcpy(s2.name, "priya");

    printf("Student name: %s\n", s2.name);
    printf("Student roll: %d\n", s2.roll);
    printf("Student cgpa: %f\n", s2.cgpa);

    struct student s3;

    s3.roll = 22662;
    s3.cgpa = 9.9;
    // s1.name = "nisha"; -> it'll show an error so...
    strcpy(s2.name, "ananya");

    printf("Student name: %s\n", s3.name);
    printf("Student roll: %d\n", s3.roll);
    printf("Student cgpa: %f\n", s3.cgpa);

    return 0;
}
*/
// Array of Structures...
/*
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student ece[100];

    ece[0].roll = 66699;
    ece[0].cgpa = 6066.00;
    strcpy(ece[0].name, "Nisha");
    ece[1].roll = 66690;
    ece[1].cgpa = 6077.00;
    strcpy(ece[1].name, "disha");
    printf("1st student: %d\t %f\t %s\n", ece[0].roll, ece[0].cgpa, ece[0].name);
    printf("2nd student: %d\t %f\t %s\n", ece[1].roll, ece[1].cgpa, ece[1].name);

    return 0;
}*/
/*
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {1669, 9.6, "Nisha"};
    printf("The student details: %d\t %f\t %s\n", s1.roll, s1.cgpa, s1.name);
    return 0;
}
*/
// Pointers to structures
/*
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {1655, 9.3, "Nisha"};
    struct student *ptr = &s1;
    printf("Student information : %d\n %f\n %s\n", (*ptr).roll, (*ptr).cgpa, (*ptr).name);
    printf("Student information : %d %f %s", (ptr)->roll, (ptr)->cgpa, (ptr)->name); // Arrow operator.....
    return 0;
}
*/

// PASSING STRUCTURE TO FUNCTIONS...
/*
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

int main() {
    struct student s1 = {1665, 9.2, "Nisha"};
    printinfo(s1);
    return 0;
}

void printinfo(struct student s1) {
    printf("Student info: \n");
    printf("%d\n%f\n%s", s1.roll, s1.cgpa, s1.name);
}*/





