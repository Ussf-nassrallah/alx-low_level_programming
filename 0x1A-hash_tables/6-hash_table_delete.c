#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table will be deleted
 * Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	hash_node_t *helper;

	if (!ht)
		return;


	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];

		while (current_node != NULL)
		{
			helper = current_node;
			current_node = current_node->next;

			if (helper->key != NULL)
				free(helper->key);

			if (helper->value != NULL)
				free(helper->value);

			free(helper);
		}
	}

	free(ht->array);
	free(ht);
}