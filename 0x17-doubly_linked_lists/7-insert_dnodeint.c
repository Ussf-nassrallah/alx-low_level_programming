#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: the node at the beginning of the list
 * @i: position
 * @n: node data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int i, int n)
{
	/* n_node = new node */
	dlistint_t *ptr = *head, *n_node;
	/* create first node in the list*/
	if (i == 0)
		return (add_dnodeint(head, n));
	/* go to the next node */
	while (i != 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i--;
	}
	/* create new node at the end */
	if (ptr->next == NULL)
		return (add_dnodeint_end(head, n));
	/* inserts a new node at a given position. */
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = ptr;
	n_node->next = ptr->next;
	ptr->next->prev = n_node;
	ptr->next = n_node;
	/* return new node */
	return (n_node);
}
