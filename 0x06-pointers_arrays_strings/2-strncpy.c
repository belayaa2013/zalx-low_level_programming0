#include "main.h"
/**
 * _strncpy - a function that copy a string to other string
 * @dest: a string which copied on
 * @src: a string that is going to copied
 * @n: maximum length of the string
 * Return: is dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

