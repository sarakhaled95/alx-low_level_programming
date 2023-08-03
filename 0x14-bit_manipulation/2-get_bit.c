#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: given index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
	/*shifting the bit value to the rightmost position*/
	/*using bitwise AND operation with 1 to extract the value*/
}
