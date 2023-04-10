#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t op, r, w;

	if (filename == NULL)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	r = read(op, text, letters);
	w = write(STDOUT_FILENO, text, r);
	if (op == -1 || r == -1 || w == -1 || w != r)
	{
		free(text);
		return (0);
	}
	free(text);
	close(op);
	return (w);
}
