#include "lists.h"

/**
 * insert_nodeint_at_index - func that inserts a new node at a given position
 * @head: pointer to the first node
 * @index: node index
 * @n: node data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;

	listint_t *t = *head;

	unsigned int j;

	new_node = malloc(sizeof (listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; t && j < index; j++)
	{
		if (j == index - 1)
		{
			new_node->next = t->next;
			t->next = new_node;
			return (new_node);
		}
		else
			t = t->next;
	}

	return (NULL);

}
