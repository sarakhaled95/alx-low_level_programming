#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @n: length of the array
 * @a: the input in the array of integers
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
