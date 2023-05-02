#include "lists.h"

/**
 * sum_listint - func that return the sum of the all data
 * @head: first node in the list
 * Return: 0 or sum
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
