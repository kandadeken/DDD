#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/


int main() {
int intType;
float floatType;
long int long intType;
long long int long long intType;
char charType;

/* sizeof evaluates the size of a variable*/
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(long intType));
printf("Size of long long int: %zu bytes\n", sizeof(long long intType));
printf("Size of char: %zu byte\n", sizeof(charType));

return 0;
}
