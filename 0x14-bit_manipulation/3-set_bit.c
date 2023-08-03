#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a givin number
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
	/*creating a mask that has bit of value one at the index value*/
	/*using the bitwise OR to set the bit value to 1 */
}
