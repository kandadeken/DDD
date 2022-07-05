#include <stdio.h>

/**
 * main - prints all the letters except q and e in lowercase
 * followed by a new line
 * Return: always return 0
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
}
putchar (10); /* This is an ASCII code for newline */

return (0);
}
