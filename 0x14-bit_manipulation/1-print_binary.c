#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number needed to be converted
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int pr = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	}
	if (!pr)
		_putchar('0');
}
