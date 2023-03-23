#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers 0 to 14
 * Return: ...
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}

		_putchar('\n');
	}
}
