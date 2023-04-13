#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min size of array
 * @max: max size of array
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int arraySize = max - min;

	int index;

	int *arrayOfInt;

	if (min > max)
	{
		return (NULL);
	}

	arrayOfInt = malloc(sizeof(int) * arraySize);

	if (arrayOfInt == NULL)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < arraySize; index++)
		{
			*(arrayOfInt + index) = min + index;
		}

		return (arrayOfInt);
	}
}
