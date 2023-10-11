#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps;
	size_t j = 0;
	size_t i = 0;

	steps = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}

	for (; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += steps;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	if (j >= size)
	{
		j = size - 1;
	}

	for (; i <= j; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
