#include "lists.h"

/**
 * free_listint2 - func that frees a linked list
 * @head: entry point into a linked list
 * Return: ...
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		(*head) = t;
	}

	*head = NULL;
}
