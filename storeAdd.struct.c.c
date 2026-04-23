// Enter address of 5 people (house number, block, city, state)

#include<stdio.h>
#include<string.h>

struct address{
    int houseNumb;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main() {
    struct address add[5];

    for(int i=0; i<5; i++){
    printf("Enter the address for person %d: ", i+1);

    printf("House number: ");
    scanf("%d", &add[i].houseNumb);

    printf("Block number: ");
    scanf("%d", &add[i].block);

    printf("City: ");
    scanf("%s", add[i].city);

    printf("State: ");
    scanf("%s", add[i].state);
    }

    printf("\n--- Addresses ---\n");

    for(int i=0; i<5; i++) {
        printAdd(add[i]);
        printf("\n");
    }
    return 0;
}

void printAdd(struct address add) {
    printf("Address is:\n");
    printf("House No: %d\n", add.houseNumb);
    printf("Block: %d\n", add.block);
    printf("City: %s\n", add.city);
    printf("State: %s\n", add.state);

}

