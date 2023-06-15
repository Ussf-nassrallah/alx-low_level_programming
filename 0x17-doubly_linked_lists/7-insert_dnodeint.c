#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @h: the node at the beginning of the list
 * @idx: position
 * Return: current node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx)
{
	size_t counter = 0;

	/* find node by index */
	while (h && counter < idx)
	{
		h = h->next;
		counter++;
	}

	return (h);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: the node at the beginning of the list
 * @i: position
 * @n: node data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int i, int n)
{
	dlistint_t *n_node, *temp;

	if (head == NULL)
		return (0);

	if (!i)
		return (add_dnodeint(head, n));

	temp = get_dnodeint_at_index(*head, i - 1);

	if (temp == NULL)
		return (0);

	if (temp->next == NULL)
		return (add_dnodeint_end(head, n));

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (0);

	n_node->n = n;
	n_node->prev = temp;
	n_node->next = temp->next;
	temp->next->prev = n_node;
	temp->next = n_node;

	return (n_node);
}
