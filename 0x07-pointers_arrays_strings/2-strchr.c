#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: array of strings
 * @c: character to be located
 * Return: address of character c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
