#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: segment
 * @accept: the referance string
 * Return: no. of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int n = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (0);
			}
		}
		s++;
	}
	return (n);
}
