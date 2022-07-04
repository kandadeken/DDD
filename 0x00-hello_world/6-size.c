#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/


int main() {
int intType;
float floatType;
double doubleType;
char charType;

/* sizeof evaluates the size of a variable*/
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));

return 0;
}
