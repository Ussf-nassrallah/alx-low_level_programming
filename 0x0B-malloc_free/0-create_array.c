#include "main.h"
#include <stdlib.h>

/**
 * create_array - funcion that create an array of characters
 * @size: size of array will be created
 * @c: represent the char will be operated
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	/* Empty Array */
	char *s;

	unsigned int index;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	else
	{

		for (index = 0; index < size; index++)
		{
			*(s + index) = c;
		}

		return (s);
	}
}
