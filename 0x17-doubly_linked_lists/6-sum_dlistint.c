#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data(n) of the list
 * @head: the node at the beginning of the list
 * Return: sum = output
*/
int sum_dlistint(dlistint_t *head)
{
	int output = 0;

	while (head != NULL)
	{
		output += head->n;
		head = head->next;
	}

	return (output);
}
