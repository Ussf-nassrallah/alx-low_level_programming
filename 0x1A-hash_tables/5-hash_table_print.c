#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table will be printed
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	int finish = 0;

	if (ht == NULL)
		return;
	
	printf("{");

	for (; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (finish)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			finish = 1;
			node = node->next;
		}
	}

	printf("}\n");
}