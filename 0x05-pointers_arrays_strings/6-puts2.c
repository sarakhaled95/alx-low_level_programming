#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int counter = 0;
	int index = 0;
	char *s = str;
	int k;

	while (*s != '\0')
	{
		s++;
		counter ++;
	}
	index = (counter - 1);
	for (k = 0; k <= index; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
