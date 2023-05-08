#include "main.h"

/**
 * append_text_to_file - f that appends text at the end of a file
 * @fn: file name
 * @s: string
 * Return: ...
 */

int append_text_to_file(const char *fn, char *s)
{
	int open_output, write_output, idx = 0;

	if (!fn)
		return (-1);

	if (s)
	{
		while (s[idx])
			idx++;
	}

	open_output = open(fn, O_WRONLY | O_APPEND);
	write_output = write(open_output, s, idx);

	if (open_output == -1 || write_output == -1)
		return (-1);

	close(open_output);

	return (1);
}
