#include "main.h"

/**
 * leet - encodes a string
 * @c: string
 * Return: encoded string
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = value[i] + 48;
			}
		}
		c++;
	}
	return (cp);
}
