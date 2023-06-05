#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @n: new value to be added
 * @head: pointer to first node
 * Return:  address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

