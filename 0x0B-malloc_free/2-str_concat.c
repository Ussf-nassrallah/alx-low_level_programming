#include "main.h"
#include <stdlib.h>

int _strlength(char *s);

/**
 * str_concat - function that concatenates 2 str
 * @s1: first string will be operated
 * @s2: second string will be operated
 * Return: full string - s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int s1length = _strlength(s1);

	int s2length = _strlength(s2);

	int index, j;

	char *fullstr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	fullstr = malloc(sizeof(char) * (s1length + s2length + 1));

	if (fullstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < s1length; index++)
		{
			*(fullstr + index) = s1[index];
		}

		for (j = 0; j < s2length; j++)
		{
			*(fullstr + (s1length + j)) = s2[j];
		}
	}

	return (fullstr);
}

/**
 * _strlength - function that return length of str
 * @s: string will be operated
 * Return: number of characters
*/

int _strlength(char *s)
{
	int index = 0;

	if (s == NULL)
	{
		s = "";
	}

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}
