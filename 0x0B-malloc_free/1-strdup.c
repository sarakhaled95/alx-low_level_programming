#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string
 * Return: a pointer to the duplicated string or Null for fail
 */
char *_strdup(char *str)
{
	int i, j;
	char *k;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)

	k = malloc(j * sizeof(*str) + 1);

	if (k == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < j; i++)
			k[i] = str[i];
	}
	return (k);
}
