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
	size_t low_idx = 0;
	size_t hight_idx = size - 1;
	size_t index;
	size_t steps;

	steps = sqrt(size);

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index += steps)
	{
		if (value <= array[index])
		{
			low_idx = index - steps;
			hight_idx = index;
			printf("Value found between indexes [%ld] and [%ld]\n", low_idx, hight_idx);
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		}
	}

	for (; low_idx <= hight_idx; low_idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", low_idx, array[low_idx]);
		if (array[low_idx] == value)
		{
			return (low_idx);
		}
	}

	return (-1);
}
