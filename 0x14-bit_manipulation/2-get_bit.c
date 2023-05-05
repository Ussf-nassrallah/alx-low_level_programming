#include "main.h"

/**
 * get_bit - Function to get bit value.
 * @number: num will be operated
 * @idx: index
 * Return: int
 */

int get_bit(unsigned long int number, unsigned int idx)
{
	int value;

	if (idx > 63)
	{
		return (-1);
	}

	value = (number >> idx) & 1;

	return (value);
}
