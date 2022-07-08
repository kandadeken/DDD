# include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * followed by new line
 * Return: always 0
 */

void print_alphabet(void)
{
	int j;

	j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
