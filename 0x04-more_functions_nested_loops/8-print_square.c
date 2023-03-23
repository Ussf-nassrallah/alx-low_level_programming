#include "main.h"

/**
 * print_square - function that prints a square
 * @size: represent the size of square
 * Return: ...
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
