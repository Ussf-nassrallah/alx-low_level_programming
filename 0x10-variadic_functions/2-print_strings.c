#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: ele will be printed betwen arguments
 * @n: arguments count
 * @...: arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list sp;

	va_start(sp, n);

	for (; i < n; i++)
	{
		if (va_arg(sp, char*) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(sp, char*));
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(sp);

	printf("\n");
}
