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
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node || !ht || strcmp(key, "") == 0)
		return (0);

	new_node->key = malloc(sizeof(char) * (strlen(key) + 1));
	new_node->value = malloc(sizeof(char) * (strlen(value) + 1));

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	return (1);
}