#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the node at the beginning of the list
 * @n:  data to be added to the new node
 * Return: new node address or null
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* Insertion the new node at the Beginning of the list */
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	/* Return: new node address */
	return (new_node);
}
