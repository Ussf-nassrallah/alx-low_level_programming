#include "main.h"

/**
 * create_file - func that create a file
 * @fn: file name (file will be created)
 * @s: text content
 * Return: int
 */

int create_file(const char *fn, char *s)
{
	int index;
	/* Value return from open */
	int open_output = 0;
	/* value return from write */
	int write_output = 0;

	if (fn == NULL)
		return (-1);

	if (s != NULL)
	{
		for (index = 0; s[index];)
			index++;
	}

	open_output = open(fn, O_CREAT | O_RDWR | O_TRUNC, 0600);

	write_output = write(open_output, s, index);

	if (open_output == -1 || write_output == -1)
		return (-1);

	close(open_output);
	return (1);
}
