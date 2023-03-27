#include <stdio.h>
#include <string.h>

/**
 * print_rev - function thats prints a string in reverse
 * @s: represent the string will be reversed
 * Return: ...
 */

void print_rev(char *s)
{
	int strsize = strlen(s);

	if (strsize != 0)
	{
		int i;

		for (i = strsize; i >= 0; i--)
		{
			putchar(s[i]);
		}
	}

	putchar('\n');
}
