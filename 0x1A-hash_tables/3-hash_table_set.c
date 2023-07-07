#include "hash_tables.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the list
 * @key: the key of the node
 * @value: node value
 * Return: the address of the new node, or NULL
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}



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
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
		ht->array[index] = new_node;
	else
		add_node(&(ht->array[index]), key, value);

	return (1);
}

