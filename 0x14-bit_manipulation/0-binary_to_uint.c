#include "main.h"

/**
 * binary_to_uint - func that converts binary to uint
 *@b: binary will be convert
 Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0;

	unsigned int value = 0;

	if (!b)
		return (0);

	for (; b[index]; index++)
	{
		if(b[index] < '0' || b[index] > '1')
			return (0);

		value = 2 * value + (b[index] - '0');
	}

	return (value);
}
