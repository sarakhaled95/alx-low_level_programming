#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head
 * @index: index
 * Return: value of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head)
	{
		if (k == index)
			return (head);
		head = head->next;
		k++;
	}
	return (NULL);
}
