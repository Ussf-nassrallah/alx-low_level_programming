#include "main.h"

/**
 * print_binary - func that convert decimal number to binary
 * @number: number will be convert
 * Return: Nothing - print output
 */

void print_binary(unsigned long int number)
{
	int index = 63;

	int counter = 0;

	unsigned long int cur;

	for (; index >= 0; index--)
	{
		cur = number >> index;

		if (cur & 1)
		{
			putchar('1');
			counter++;
		}
		else if (counter)
			putchar('0');
	}
	if (!counter)
		putchar('0');
}
