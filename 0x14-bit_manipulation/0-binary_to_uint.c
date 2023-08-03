#include "main.h"

/**
 * unsigned int binary_to_uint - a function that converts a binary number * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * return the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
