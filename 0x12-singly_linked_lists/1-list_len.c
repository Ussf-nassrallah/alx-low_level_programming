#include <stdio.h>
#include "lists.h"

/**
 * list_len - func that returns the num of ele
 * @h: list pointer
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
