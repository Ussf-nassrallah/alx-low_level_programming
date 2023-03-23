#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit
 * @c: chaeackter will be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
