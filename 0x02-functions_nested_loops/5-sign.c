#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number that is checked
 * Return: 1 positive integer 0 for zero integer -1 for negative integer
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
