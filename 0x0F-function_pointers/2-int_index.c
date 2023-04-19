#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array will be operated
 * @size: size of array
 * @cmp: function for check element
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (; index < size; index++)
		{
			if ((*cmp)(array[index]))
				return (index);
		}

		return (-1);
	}
}
