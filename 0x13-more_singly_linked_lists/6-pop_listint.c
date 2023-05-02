#include "lists.h"

/**
 * pop_listint - delete head node and returns the head node data
 * @head: entry point into a linked list
 * Return: num
 */

int pop_listint(listint_t **head)
{
	listint_t *t;

	int number;

	if (!*head || !head)
		return (0);

	number = (*head)->n;

	t = (*head)->next;

	free(*head);

	*head = t;

	return (number);
}
