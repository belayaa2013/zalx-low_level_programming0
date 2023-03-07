#include "main.h"
/**
 * _strpbrk - a function locates the first occurrence in the string s of
 * any of bytes in the string accept.
 * @s: the string
 * @accept: the reference string
 * Return: the new string or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}
