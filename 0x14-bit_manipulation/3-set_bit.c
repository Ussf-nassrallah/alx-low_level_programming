#include "main.h"

/**
 * set_bit - Function to set bit value.
 * @number: numbers will be operated
 * @idx: index
 * Return: int
 */

int set_bit(unsigned long int *number, unsigned int idx)
{
	if (idx > 63)
	{
		return (-1);
	}

	*number = ((1UL << idx) | *number);

	return (1);
}
