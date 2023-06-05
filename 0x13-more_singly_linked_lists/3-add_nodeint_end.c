#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first node
 * @n: value of new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last;

	if (!head || !new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
