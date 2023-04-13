#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: represent the size of memory will be located
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);

	if (output == NULL)
	{
		exit(98);
	}
	else
	{
		return (output);
	}
}
