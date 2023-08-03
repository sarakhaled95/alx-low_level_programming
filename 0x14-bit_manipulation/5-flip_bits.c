#include "main.h"
/*
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: how many bits needed to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XORval = n ^ m;
	unsigned int count = 0;

	while (XORval)
	{
		if (XORval & 1ul)
			count++;
		XORval >>= 1;
	}
	return (count);
}
