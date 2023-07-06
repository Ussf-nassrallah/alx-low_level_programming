#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: hash table size
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_node_t) * size);

	if (!ht || size == 0)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
