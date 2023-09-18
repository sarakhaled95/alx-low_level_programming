#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: The number to be computed
 * Return: Absolute number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int n;

		n = c * -1;
		return (n);
	}
	return (c);
}
