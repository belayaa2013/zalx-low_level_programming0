#include "main.h"
/**
 * _strlen - a function that returns the length of the string
 * @s: the string
 * Return: len (success)
 */
int _strlen(char *s)
{
	int len  = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}

