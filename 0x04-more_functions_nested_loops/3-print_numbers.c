#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9
 * Return: The number since 0 upto 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
