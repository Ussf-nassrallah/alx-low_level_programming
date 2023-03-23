#include "main.h"

/**
 * print_line - function that prints ('_') based for a number
 * @n: Represent number
 * Return: ...
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
