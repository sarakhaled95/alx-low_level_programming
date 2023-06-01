#include "lists.h"
/**
 * _strlen - determine the string length
 * @s: string to check its length
 * Return:length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}


/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
	h = h->next;
	i++;
	return (i);
}
