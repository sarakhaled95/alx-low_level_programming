#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to determine array length
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;

	return (len);
}



/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: point to a newly allocated space or null
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *k;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	k = malloc((len1 + len2) * sizeof(char) + 1);

	if (k == 0)
		return (0);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			k[i] = s1[i];
		else
			k[i] = s2[i - len1];
	}
	k[i] = '\0';
	return (k);
}
