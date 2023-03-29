#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: represent destination (first string)
 * @src: represent the characters thats add them to destination
 * @n: represent numbers of characters
 * Return: dest as a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
