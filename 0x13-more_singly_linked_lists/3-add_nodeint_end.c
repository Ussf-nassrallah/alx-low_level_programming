#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a linked list
 * @head: starting point of a linked list
 * @n: node data
 * Return: the address of the new node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create a new node */
	listint_t *end_node;

	/* current node */
	listint_t *current_node;

	end_node = malloc(sizeof(listint_t));
	end_node->n = n;
	end_node->next = NULL;

	if (!end_node)
		return (NULL);

	if (!(*head))
	{
		(*head) = end_node;
		return (*head);
	}

	current_node = (*head);

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = end_node;

	return (*head);
}
