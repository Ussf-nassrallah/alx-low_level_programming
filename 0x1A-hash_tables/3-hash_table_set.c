#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: node key
 * @value: node value
 * Return: int (0 or 1)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = malloc(sizeof(char) * (strlen(key) + 1));
	new_node->value = malloc(sizeof(char) * (strlen(value) + 1));

	if (new_node->key != NULL && new_node->value != NULL)
	{
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
	}
	else
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = new_node;

	return (1);
}

