#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: number that is checked
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		int abs_val = c * -1;

		_putchar(abs_val);
	}
	_putchar(c);
}
