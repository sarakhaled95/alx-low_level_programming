#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int index;
	int counter = 0;
	int k;

	while (str[counter] != '\0')
	counter++;

	index = (counter / 2);
	for (k = index; k < counter; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
