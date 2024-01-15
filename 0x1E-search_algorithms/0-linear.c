#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers using
 * the linear search algorithm
 * @array: array that needed to be searched
 * @size: size of array
 * @value: value needed to be located
 * Return: index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;
	if (!array)
		return (-1);
	for (i = 0; i < (size - 1); i++)
	{
		if (array[i] != value)
		{
			printf ("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else if (array[i] == value)
		{
			printf ("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
