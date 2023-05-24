#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array givin
 * @size: size of array
 * @cmp: pointer to funtions
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
