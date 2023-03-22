#include <stdio.h>

/**
 * positive_or_negative - checks if the number positive or negative
 * @n: the number to be checked
 * Return: string
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
}
