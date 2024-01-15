#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: array that needed to be searched
 * @size: size of array
 * @value: value needed to be located
 * Return: index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (low <= high)
	{
		print_array(low, high, array);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}

/**
* print_array - prints array in correct output for task
* @start: beginning of array
* @end: end of array
* @array: the array to print
*
* Return: void
*/
void print_array(int start, int end, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
