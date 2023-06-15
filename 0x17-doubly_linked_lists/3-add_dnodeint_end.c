#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the End of a dlistint_t list.
 * @head: the node at the beginning of the list
 * @n:  data to be added to the new node
 * Return: new node address or null
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* create a new node */
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	};

	/* find the last node in the list before insertion a new node at the end */
	while ((*head)->next != NULL)
		*head = (*head)->next;

	/* Insertion the new node at the End */
	new_node->prev = *head;
	(*head)->next = new_node;

	return (new_node);
}
