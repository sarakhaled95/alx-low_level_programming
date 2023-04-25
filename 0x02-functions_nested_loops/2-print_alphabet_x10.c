#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
			i++;
	}

}
