#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size;
}
