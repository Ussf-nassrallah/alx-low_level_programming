#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that free linked list
 * @head: list will be freed
 * Return: ...
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;

		free(head->str);

		free(head);

		head = t;
	}
}
