#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @head: the node at the beginning of the list
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *head)
{
	int count = 0;

	if (!head)
		return (count);

	while (head)
	{
		count++;
		head = head->next;
	};

	return (count);
}
