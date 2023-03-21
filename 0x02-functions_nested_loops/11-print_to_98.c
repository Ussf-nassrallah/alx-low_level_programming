#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: the number to start printing from
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
		printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	} else if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
		printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
}
