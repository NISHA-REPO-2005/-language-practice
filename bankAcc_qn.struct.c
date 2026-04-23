// Make a structure to store bank account information of a customer of ABC bank. Also make an alias for it...

#include<stdio.h>
#include<string.h>

typedef struct bankAccount{
    int accountNumb;
    char name[100];
} acc;

int main() {
    acc acc1 = {132, "Nisha"};
    acc acc2 = {2552, "Adya"};

    printf("Account details: %d\n %s\n", acc1.accountNumb, acc1.name);
    printf("Account details: %d\n %s\n", acc2.accountNumb, acc2.name);


    return 0;
}


