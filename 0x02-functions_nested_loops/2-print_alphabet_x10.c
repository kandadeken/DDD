# include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase
 * followed by new line
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int j;
	int i;

	i = 0;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}


}
