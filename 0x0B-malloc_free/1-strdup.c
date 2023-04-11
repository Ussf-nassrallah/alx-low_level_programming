#include "main.h"
#include <stdlib.h>

/**
 * _strdup - f returns a pointer to a newly allocated space in memory
 * @str: string will be operated
 * Return: pointer
 */

char *_strdup(char *str)
{
	int index, j, strlength;

	/* Empty Array of characters */
	char *strArray;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		index = 0;

		while (str[index] != '\0')
		{
			index++;
		}

		strlength = index;
	}

	strArray = malloc(sizeof(char) * strlength);

	if (strArray == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < strlength; j++)
		{
			strArray[j] = str[j];
		}

		return (strArray);
	}
}
