#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - f that exe function for each ele of an araay
 * @array: array will be operated
 * @size: size of array
 * @action: f will be exe
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		for (; index < size; index++)
		{
			(*action)(array[index]);
		}
	}
}
