#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of arguments passed to the func
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int index;

	char *s;

	char *separator = "";

	/* format pointer */
	va_list fp;

	va_start(fp, format);

	if (format != NULL)
	{
		index = 0;

		while (format[index])
		{
			switch (format[index])
			{
				case 'i':
					printf("%s%d", separator, va_arg(fp, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(fp, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(fp, double));
					break;
				case 's':
					s = va_arg(fp, char*);

					if (s == NULL)
					{
						s = "(nil)";
					}

					printf("%s%s", separator, s);
					break;
				default:
					index++;
					continue;
			}

			separator = ", ";
			index++;
		}

		va_end(fp);

		printf("\n");
	}
}
