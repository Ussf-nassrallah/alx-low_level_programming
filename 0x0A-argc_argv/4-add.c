#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *c);

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: arguments victor represent an array of arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int sum = 0;

	int index;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{

		for (index = 1; index < argc; index++)
		{
			if (_isdigit(argv[index]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[index]);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}

/**
 * _isdigit - function checks if character is a number
 * @c: char will be checked
 * Return: ...
 */

int _isdigit(char *c)
{
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
		{
			c++;
		}
		else
		{
			return (1);
		}
	}

	return (0);
}
