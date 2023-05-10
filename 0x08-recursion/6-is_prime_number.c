#include "main.h"
/**
 * is_prime_number - determine if an integer is prime number or not
 * @n: integer entered
 * Return: 1 if it is prime number 0 if false
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n % 2 > 0)
	{
		return (1);
	}
	else
		return (0);
}
