#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: givin array
 * @size: size of array
 * @action: pointer to the funtion needed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last_elem = array + size - 1;

	if (array && size && action)
		while (array <= last_elem)
			action(*array++);

}
