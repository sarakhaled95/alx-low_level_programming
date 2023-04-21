#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 0; n++)
	{
	for (m = n + 1; m <= 9; m++)
	{
	if (n != m)
	{
		putchar(n);
		putchar(m);
	if (n == 8 && m == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
