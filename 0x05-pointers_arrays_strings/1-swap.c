#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: represent the first integer
 * @b: represent the second integer
 * Return: ...
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
