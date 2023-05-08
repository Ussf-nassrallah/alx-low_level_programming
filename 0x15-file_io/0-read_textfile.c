#include "main.h"

/**
 * read_textfile - f that reads a text file and prints
 * @fn: file name
 * @data: will be operated
 * Return: ...
 */

ssize_t read_textfile(const char *fn, size_t data)
{
	char *buffer;
	ssize_t open_output;
	ssize_t write_output;
	ssize_t t;

	open_output = open(fn, O_RDONLY);

	if (open_output == -1)
		return (0);

	buffer = malloc(sizeof(char) * data);

	t = read(open_output, buffer, data);

	write_output = write(STDOUT_FILENO, buffer, t);

	free(buffer);

	close(open_output);

	return (write_output);
}
