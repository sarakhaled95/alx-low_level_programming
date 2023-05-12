#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be connected
 * @src: string to be connected
 * Return: pointer to destination of string
 */
char *_strcat(char *dest, char *src)
{
	int length1 = 0;
	int length2;

	while (dest[length1] != '\0')
		length1++;

	for (length2 = 0; src[length2] != '\0'; length2++, length1++)
	{
		dest[length1] = src[length2];
	}
	dest[length1] = '\0';
	return (dest);
}
