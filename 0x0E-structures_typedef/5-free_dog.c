#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that free dogs
 * @d: dog will be free
 * Return: ...
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
