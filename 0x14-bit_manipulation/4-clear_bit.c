#include "main.h"

/**
 * clear_bit - Function to clear bit value.
 * @numbers: elements will be operated
 * @idx: index
 * Return: int
 */

int clear_bit(unsigned long int *numbers, unsigned int idx)
{
	if (idx > 63)
	{
		return (-1);
	}

	*numbers = (~(1UL << idx) & *numbers);

	return (1);
}
