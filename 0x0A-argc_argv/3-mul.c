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

	int product = 1;

	if (argc == 3)
	{
		for (index = 1; index < argc; index++)
		{
			/* atoi - function that convert char to int */
			product = product * atoi(argv[index]);
		}

		printf("%d\n", product);
	}
	else if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return(1);
	}

	return (0);
}
