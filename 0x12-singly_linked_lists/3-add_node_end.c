#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of the list
 * @head: pointer to the list
 * @str: string will be addede to the node
 * Return: adress of the new ele
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	unsigned int index = 0;

	list_t *t = *head;

	while (str[index] != '\0')
	{
		index++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (t->next)
	t = t->next;

	t->next = new_node;

	return (new_node);
}
