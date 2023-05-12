#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @agrc: argument count
 * @argv: argument vector
 * Return: Always 0 for success 1 for false
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastc = 0, m = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cents[i])
			{
				leastc += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
