#include "main.h"

/**
 * _strlen_recursion - function that returns the length of string
 * @s: represent the string will be operated
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int _strlen = 0;

	if (*s != '\0')
	{
		_strlen++;
		_strlen += _strlen_recursion(s + 1);
	}

	return (_strlen);
}
