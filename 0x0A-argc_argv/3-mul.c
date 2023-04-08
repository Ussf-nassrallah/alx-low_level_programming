#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: arguments count
 * @argv: array of thos arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int index;

	int output;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			/* atoi - function that convert char to int */
			output = atoi(argv[1]) * atoi(argv[2]);
		}

		printf("%d\n", output);
	}

	return (0);
}
