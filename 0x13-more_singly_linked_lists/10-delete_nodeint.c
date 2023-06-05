#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to first the first node
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *del;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}

		del = temp->next;
		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
	}
	return (1);
}
