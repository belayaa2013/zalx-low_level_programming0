#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_fil - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_fil(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes Fd.
 * @Fd: File descriptor to be closed.
 */
void close_file(int Fd)
{
	int cl;

	cl = close(Fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close Fd %d\n", Fd);
		exit(100);
	}
}

/**
 * main - the function that copy the contents of a file to another file.
 * @argc: number of arguments.
 * @argv: array of pointers.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_fil(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
