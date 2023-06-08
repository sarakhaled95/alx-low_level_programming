#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number that needs to be converted
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, pr = 0;

	while (bit)
	{
		if (n & 1l << --bit)
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
