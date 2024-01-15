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
	unsigned long int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
