#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/


int main() {

/* sizeof evaluates the size of a variable*/
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of char: %zu byte\n", sizeof(char));

return 0;
}
