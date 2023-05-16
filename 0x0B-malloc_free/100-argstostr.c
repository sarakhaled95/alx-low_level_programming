#include "main.h"
#include <stdlib.h>
/**
 * _strlen - to determine the string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: int
 * @av: arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, x = 0, j, y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, x++)
		x += _strlen(av[i]);

	s = malloc(sizeof(char) * x + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, y++)
			s[y] = av[i][y];
		s[y] = '\n';
		y++;
	}
	s[y] = '\0';
	return (s);
}
