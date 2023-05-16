#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wrdcnt - counts the number of words
 * @s: string to count
 * Return: int number of words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to be divided
 * Return: string or NULL
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **m;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	n = wrdcnt(str);
	if (n == 1)
	{
		return (NULL);
	}
	m[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str [i + j]; j++)
				;
			j++;
			m[wc] = (char **)malloc(j * sizeof(char));
			j--;
			if (m[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(m[k]);
				free(m[n - 1]);
				free(m);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				m[wc][l] = str[i + l];
			m[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (m);

}
