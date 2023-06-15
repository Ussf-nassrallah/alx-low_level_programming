#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @h: the node at the beginning of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *h)
{
	while (h != NULL)
	{
		dlistint_t *next_node = h->next;

		free(h);
		h = next_node;
	}
}
