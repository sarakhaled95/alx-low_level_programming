#include "main.h"
/**
 * positive_or_negative - prints the sign of numbers
 * @i: integer yo be tested
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is posotive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
