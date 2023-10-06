#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

