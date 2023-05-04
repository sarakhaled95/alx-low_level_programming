#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: size of sting
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2;

	while (dest[len1] != '\0')
		len1++;
	for (len2 = 0; len2 < n && src[len2] != '\0'; len2++, len1++)
		dest[len1] = src[len2];
	dest[len1] = '\0';
	return (dest);
}
