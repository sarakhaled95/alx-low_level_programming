#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 for succes 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (j = 0; j < strlen(e); j++)
			{
				if (e[j] < 48 || e[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += _atoi(e);
		e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
