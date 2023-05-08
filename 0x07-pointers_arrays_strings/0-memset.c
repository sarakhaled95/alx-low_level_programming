#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @n: number of bytes to be changed
 * @b: the constant value
 * Return: changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
