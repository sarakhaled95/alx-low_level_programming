#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: int
 */
int *array_range(int min, int max)
{
	int *m;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	m = malloc(sizeof(int) * len);

	if (m == 0)
		return (NULL);

	for (i = 0; i < len; i++)
	m[i] = min++;
	return (m);
}
