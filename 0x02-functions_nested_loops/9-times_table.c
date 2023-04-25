#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: no return
 */
void times_table(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		a = a * 9;
		_putchar(a + 48);
	}
}
