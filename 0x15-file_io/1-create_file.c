#include "main.h"

/**
 * create_file - func that create a file
 * @fn: file name (file will be created)
 * @s: text content
 * Return: int
 */

int create_file(const char *fn, char *s)
{
	FILE *fpointer;

	if (!fn)
		return (-1);

	fpointer = fopen(fn, "w");

	if (s != NULL)
		fprintf(fpointer, "%s", s);

	fclose(fpointer);
	return (1);
}
