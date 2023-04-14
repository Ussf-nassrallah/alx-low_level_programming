#include "main.h"
#include <stdlib.h>

unsigned int _strlength(char *str);

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string will be operated
 * @s2: second string will be operated
 * @n: the number of characters
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strArray;

	unsigned int index, j;

	unsigned int s1Len = _strlength(s1);

	unsigned int s2Len = _strlength(s2);

	/* unsigned int strLen = s1Len + s2Len; */

	index = 0;

	j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	strArray = malloc(sizeof(char) * (s1Len + n + 1));

	if (!strArray)
	{
		return (NULL);
	}
	else
	{
		for (; index < s1Len; index++)
		{
			*(strArray + index) = s1[index];
		}

		for (; j < s2Len; j++)
		{
			*(strArray + (s1Len + j)) = s2[j];
		}

		return (strArray);
	}

}

/**
 * _strlength - function that return length of str
 * @str: string will be operated
 * Return: integer
 */

unsigned int _strlength(char *str)
{

	unsigned int index = 0;

	if (str == NULL)
	{
		str = "";
	}

	while (str[index] != '\0')
	{
		index++;
	}

	return (index);
}
