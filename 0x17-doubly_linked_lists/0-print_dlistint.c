#include "lists.h"

/**
 * print_dlistint - function that prints all the ele of a dlist
 * @head: the node at the beginning of the list
 * Return: Nothing
*/
size_t print_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
