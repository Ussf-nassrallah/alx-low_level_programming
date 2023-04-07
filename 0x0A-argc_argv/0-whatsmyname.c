#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: count of the arguments
 * @argv: array of pointers to the strings which are those arguments
 * Return: Always 0 : Success
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
