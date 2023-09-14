#include "lists.h"

/**
 * print_dlistint - Write a function that prints all the elements
 * @h: head
 * Return: count of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
