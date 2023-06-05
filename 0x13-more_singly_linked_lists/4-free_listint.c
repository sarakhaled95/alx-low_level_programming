#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: points to the first node
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
