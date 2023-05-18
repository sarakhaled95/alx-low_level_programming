#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old size in byte
 * @new_size: new size in byte
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *k;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		k = malloc(new_size);
		if (k == NULL)
			return (NULL);
		return (k);
	}
	if (new_size > old_size)
	{
		k = malloc(new_size);
		if (k == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)k + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (k);
}
