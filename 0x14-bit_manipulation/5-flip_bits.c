#include "main.h"

/**
 * flip_bits - Function to count flipped bits.
 * @n: first ele will be operated
 * @m: second ele will be operated
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx = 63;

	int counter = 0;

	unsigned long int cur;

	unsigned long int absolute = n ^ m;

	for (; idx >= 0; idx--)
	{
		cur = absolute >> idx;

		if (cur & 1)
		{
			counter += 1;
		}
	}

	return (counter);
}
