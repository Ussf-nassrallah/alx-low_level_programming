#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program Entry Point
 * @argv: arguments victor is an array of arguments
 * @argc: arguments count
 * Return: ...
 */

int main(int argc, char **argv)
{
	int cents;

	int coinsArray[5] = {25, 10, 5, 2, 1};

	int counter = 0;

	int index = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (argc == 2)
	{
		cents = atoi(argv[1]);

		while (cents > 0)
		{
			while (cents >= coinsArray[index])
			{
				cents = cents - coinsArray[index];
				counter = counter + 1;
			}

			index++;
		}

		printf("%d\n", counter);
	}

	return (0);
}
