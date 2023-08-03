#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: a givin number
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
/*using bitwise XOR to change any 1 to zero the */
/*if condition state that it has to have 1 to make the condition true */
	return (1);
}
