#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @h: the node at the beginning of the list
 * @idx: node index
 * Return: current node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx)
{
	dlistint_t *current_node = h;
	unsigned int counter = 0;

	/* find node by index */
	while (current_node != NULL)
	{
		if (counter == idx)
			return (current_node);
		counter++;
		current_node = current_node->next;
	}

	/* if index out of the range return null */
	return (NULL);
}
