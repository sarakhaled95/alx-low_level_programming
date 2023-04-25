#include "main.h"
/**
 * print_to_98 - Prints all natural numbers
 * @n: natural numbers
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				ptintf("%d\n", i);
			}
		for (j = n; j >= 98; j--)
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else if (j == 98)
			{
				print("%d\n", j);
			}
		}
	}
}
