#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: n nember elements
 * @size: size of elements
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	output = malloc(nmemb * size);

	if (output == NULL)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < size * nmemb; index++)
		{
			*(output + index) = 0;
		}

		return (output);
	}
}
