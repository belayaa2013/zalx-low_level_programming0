#include "main.h"
/**
 * _strstr - a function that finds the first occurance of the substring
 * @haystack: the string
 * @needle: the substring
 * Return: 0(success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
		p2++;
		}
		if (*p2 == '\0')
			return (haystack);
	}
	return (0);
}

