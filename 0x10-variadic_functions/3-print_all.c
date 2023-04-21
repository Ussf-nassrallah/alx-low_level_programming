#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of arguments passed to the func
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int index;

	/* s => string will be printed */
	char *s;

	/* sp => separator */
	char *se = "";

	/* fp => format pointer */
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
					printf("%s%d", se, va_arg(fp, int));
					break;
				case 'c':
					printf("%s%c", se, va_arg(fp, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(fp, double));
					break;
				case 's':
					s = va_arg(fp, char*);

					if (!s)
					{
						s = "(nil)";
					}

					printf("%s%s", se, s);
					break;
				default:
					index++;
					continue;
			}

			se = ", ";
			index++;
		}
	}
	va_end(fp);
	printf("\n");
}
