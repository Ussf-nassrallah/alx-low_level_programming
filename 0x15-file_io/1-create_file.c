#include "main.h"

/**
 * create_file - func that create a file
 * @fn: file name (file will be created)
 * @s: text content
 * Return: int
 */

int create_file(const char *fn, char *s)
{
	int index = 0;
	/* Value return from open */
	int open_output;
	/* value return from write */
	int write_output;

	if (!fn)
		return (-1);

	open_output = open(fn, O_RDWR | O_CREAT, 0600);
	write_output = write(open_output, s, strlen(s));

	if (s != NULL)
	{
		while (s[index] != '\0')
		{
			index++;
		}
	}

	if (open_output == -1 || write_output == -1)
		return (-1);

	close(open_output);
	return (1);
}
