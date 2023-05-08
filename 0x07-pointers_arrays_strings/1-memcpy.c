#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: memory area to be copied
 * @dest: memory area to be copied to
 * @n: number od bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
