#include "main.h"
/**
 * _strchr - a function that locates a cheracter in the string
 * @s: the string
 * @c: the character to be checked in the string
 * Return: 0(success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
