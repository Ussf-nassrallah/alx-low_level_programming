#include "variadic_functions.h"

/**
 * sum_them_all - f that returns the sum of all parameters
 * @n: count of arguments
 * @...: arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index = 0;

	int sum = 0;

	va_list cptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(cptr, n);

	for (; index < n; index++)
	{
		sum += va_arg(cptr, int);
	}

	va_end(cptr);

	return (sum);
}
