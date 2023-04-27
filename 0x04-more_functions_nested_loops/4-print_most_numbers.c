#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i >= 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
