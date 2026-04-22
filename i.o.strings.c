/* gets(str) -> inputs a string but outdated and dengerous
   fgets(str, n, stdin) -> inputs a string -> this is used to input a value
   puts(str) -> output a string...-> it can store multiwords and gives a space after a function so we do not have to give "\n"...
   scanf()  -> we are not using it as it cannot store multiwords it can onnly store one word..

   strings -> arrays -> pointers..

   in array string we cannot change the values we stored earlier -> char str[]
   in ptr string we can change the values -> char *str
*/

#include<stdio.h>
/*void canChange(char arr[]);
int main() {
    char *canChange1 = " Hello World";
    puts(canChange1);
    char *canChange2 = "Hello ";
    puts(canChange2);

    return 0;
}
*/

void cannotChange(char arr[]);

int main() {
    char cannotChange1[] = "Hello World";
    puts(cannotChange1);

    char cannotChange2[] = "Hellow....";
    puts(cannotChange2);

    return 0;
}
