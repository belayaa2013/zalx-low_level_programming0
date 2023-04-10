#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: -1 if function fails.
 *         Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, op, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while(text_content[i])
			i++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(op, text_content, i);
	if (op == -1 || w == -1)
		return (-1);
	close(op);
	return (1);
}
