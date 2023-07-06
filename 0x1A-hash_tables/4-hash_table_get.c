#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: node key
 * Return: node Value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_node = ht->array[index];

	if (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
	}

	return (NULL);
}
