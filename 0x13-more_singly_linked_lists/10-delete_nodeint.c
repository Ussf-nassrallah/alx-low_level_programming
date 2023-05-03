#include "lists.h"

/**
 * delete_nodeint_at_index - func thats delete node at index
 * @h: The entry point into a linked list
 * @idx: node index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **h, unsigned int idx)
{
	/**
	 * t = temp
	 * h = head
	 * idx = index
	*/
	unsigned int j = 0;
	listint_t *t = (*h);
	listint_t *cur = NULL;

	if (*h == NULL)
		return (-1);


	if (idx == 0)
	{
		*h = (*h)->next;
		free(t);
		return (1);
	}

	while (j < (idx - 1))
	{
		if (!t || !(t->next))
			return (-1);

		t = t->next;
		j++;
	}

	cur = t->next;
	t->next = cur->next;
	free(cur);

	return (1);
}
