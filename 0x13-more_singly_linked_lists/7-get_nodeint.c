#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: first node
 * @index: node index will be returned
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;

	unsigned int count = 0;

	while (t && count < index)
	{
		t = t->next;
		count++;
	}

	return (t ? t : NULL);
}
