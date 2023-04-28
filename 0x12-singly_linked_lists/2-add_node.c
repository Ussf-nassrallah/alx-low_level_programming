#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the list
 * @str: string will be added in the node
 * Return: the address of the new node, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	unsigned int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
