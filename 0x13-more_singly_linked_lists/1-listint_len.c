#include "lists.h"

/**
 * listint_len - func that returns list int length
 * @h: entry point into a linked list
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
