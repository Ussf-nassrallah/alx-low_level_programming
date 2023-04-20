#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: ele will be printed betwen arguments
 * @n: arguments count
 * @...: arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list nptr;

	va_start(nptr, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(nptr, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(nptr);

	printf("\n");
}
