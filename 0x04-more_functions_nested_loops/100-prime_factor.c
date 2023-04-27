#include <stdio.h>
#include "main.h"
/**
 * main - Program that finds and prints the largest prime factor of the number
 * Return: Always 0
 */
int main(void)
{
	long i, maxj;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxj = number / i;
		}
	}
	printf("%ld\n", maxj);
	return (0);
}
