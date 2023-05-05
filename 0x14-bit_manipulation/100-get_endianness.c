#include "main.h"

/**
 * get_endiannes - function that determines the endianness of the system
 * Return: int
 */

int get_endianness(void)
{
	int idx = 1;

	/* output */
	char *character = (char *) &idx;

	return (*character);
}

