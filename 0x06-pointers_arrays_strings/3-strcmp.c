#include "main.h"
/**
 * _strcmp - a function that compares two string
 * @s1: a string to be compared
 * @s2: a string to be compared
 * Return: is the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[1] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

