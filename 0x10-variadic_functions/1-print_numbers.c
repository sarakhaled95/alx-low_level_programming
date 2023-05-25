#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n:  number of integers passed to the function
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
	printf("%d%s", va_arg(args, int),
			i ? (separator ? separator : "") : "\n");
	va_end(args);
}
