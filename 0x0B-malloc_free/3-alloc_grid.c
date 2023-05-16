#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @hieght: number of rows
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **dim, i, j;
	dim = malloc(sizeof(*dim) * height);

	if (width <= 0 || height <= 0 || dim == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			dim[i] = malloc(sizeof(**dim) * width);
			if (dim[i] == 0)
			{
				while (i--)
				free(dim[i]);
				free(dim);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				dim[i][j] = 0;
		}
	}
	return (dim);
}
