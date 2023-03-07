#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: segment
 * @accept: the referance string
 * Return: no. of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
