#include "main.h"
/**
 * append_text_to_file - Appends the text.
 * @filename: A pointer to the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL.
 *        -1  file  not exist the user lacks write permissions.
 *         Otherwise  1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, op, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, i);
	if (op == -1 || w == -1)
		return (-1);
	close(op);
	return (1);
}
