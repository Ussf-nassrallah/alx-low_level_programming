#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: count of the arguments
 * @argv: array of those arguments
 * Return: 0 always success
 */

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
