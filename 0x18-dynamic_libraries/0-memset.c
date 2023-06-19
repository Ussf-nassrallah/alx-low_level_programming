#include "main.h"

/**
 * _memset - function that fils memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: the size of memory
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

