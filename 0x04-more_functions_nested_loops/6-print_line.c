#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 * Return: empty 
 */
void print_line(int n)
{
	int j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
