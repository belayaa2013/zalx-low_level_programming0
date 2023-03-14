#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string given as a parameter.
 * @str: unsigned int
 * Return: char pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *dupl;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	dupl = malloc(sizeof(char) * (i + 1));
	if (dupl == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		dupl[j] = str[j];
		j++;
	}

	dupl[j] = '\0';

	return (dupl);
}
