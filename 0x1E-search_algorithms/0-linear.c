#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: the size of array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	for (; idx < size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
