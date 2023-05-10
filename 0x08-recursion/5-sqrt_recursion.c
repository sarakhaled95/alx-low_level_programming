#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number to be squared
 * Return: the natural square root
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return(square(n, 1));
}

/**
 * square - finds the square root
 * @n: int to find square root of
 * @val: square root value
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n , val + 1));
	}
	else
		return (-1);
}
