#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 * Return: Empty
 */
void print_diagonal(int n)
{
	int j, h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (h = 0; h < j; h++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
