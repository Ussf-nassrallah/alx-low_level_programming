#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: head - The entry point into a linked list
 * Return: int
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
