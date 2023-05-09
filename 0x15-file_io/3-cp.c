#include "main.h"

/**
 * close_file -function that Closes files.
 * @f: The file to be closed.
 * Return: Nothing
 */
void close_file(int f)
{
	int output =  close(f);

	if (output == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * generate_buffer - function that generate a buffer.
 * @f: The name of the file.
 * Return: pointer.
 */
char *generate_buffer(char *f)
{
	char *bf;

	bf = malloc(sizeof(char) * 1024);

	if (bf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}

	return (bf);
}

/**
 * main - f that copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: array of arguments.
 * Return: ....
 */
int main(int argc, char *argv[])
{
	int open_o, to, read_o, write_o;
	char *bf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bf = generate_buffer(argv[2]);
	open_o = open(argv[1], O_RDONLY);
	read_o = read(open_o, bf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (open_o == -1 || read_o == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(bf);
			exit(98);
		}
		write_o = write(to, bf, read_o);
		if (to == -1 || write_o == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bf);
			exit(99);
		}
		read_o = read(open_o, bf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_o > 0);

	free(bf);
	close_file(open_o);
	close_file(to);

	return (0);
}

