#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: value of i
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
	if (*s1 != *s2)
	{
		i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
	}
	s1++;
	s2++;
	}
	return (i);
}
