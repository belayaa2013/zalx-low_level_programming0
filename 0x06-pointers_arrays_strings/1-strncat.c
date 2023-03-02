#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: one string
 * @src: the other string
 * @n: bytes src may have
 * Return: dest is the return
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';
	return (dest);
}
