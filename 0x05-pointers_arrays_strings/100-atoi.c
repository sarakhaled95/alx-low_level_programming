#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int index = 0;
	int length = 0;
	int digit = 0;
	int n = 0;
	int d = 0;
	int f = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && f == 0)
	{
		if (s[index] == '-')
			++d;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[index + 1] < '0' || s[index +1] > '9')
				break;
			f = 0;
		}
		index++;
	}
	if (f == 0)
		return (0);
	return (n);
}
