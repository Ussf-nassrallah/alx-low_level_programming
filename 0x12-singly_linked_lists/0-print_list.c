#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - func that prints all the elements of a list_t
 * @h: head pointer to the list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t numofele = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numofele++;
	}

	return (numofele);
}
