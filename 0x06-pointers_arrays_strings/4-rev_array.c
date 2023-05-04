#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: size of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int index1;
	int index2;
	int k;

	index1 = (n - 1);
		for (index2 = 0; index2 < index1; index1--, index2++)
		{
			k = a[index1];
			a[index1] = a[index2];
			a[index2] = k;
		}
}
