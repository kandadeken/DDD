#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: always return 0
 */

int main(void)
{
char ch;
int n;
for (n = 48; ch <= 57; n++)
{
putchar (n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar (ch);
}
putchar(10);

return (0);
}
