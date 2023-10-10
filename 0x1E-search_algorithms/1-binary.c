#include "search_algos.h"

void print_array(int *array, size_t size, size_t low_idx);

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: the size of array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low_idx = 0;
	size_t hight_idx = size - 1;
	size_t mid_idx;

	if (array == NULL)
		return (-1);

	while (low_idx <= hight_idx)
	{
		print_array(array, hight_idx, low_idx);
		mid_idx = (low_idx + hight_idx) / 2;

		if (array[mid_idx] == value)
			return (mid_idx);
		else if (array[mid_idx] < value)
		{
			low_idx = mid_idx + 1;
		}
		else
		{
			hight_idx = mid_idx - 1;
		}
	}

	return (-1);
}


/**
 * print_array - function thats print all ele from array
 * @array: array thats will be printed
 * @size: the size of array
 * @low_idx: the index start from
 * Return: Nothing
 */
void print_array(int *array, size_t size, size_t low_idx)
{
	size_t index;

	index = low_idx;
	printf("Searching in array: ");
	for (; index <= size; index++)
	{
		if (index != size)
			printf("%d, ", array[index]);
		else
			printf("%d\n", array[index]);
	}
}
