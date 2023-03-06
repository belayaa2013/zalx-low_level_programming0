#include "main.h"
/**
 * _memcpy - a function that copies memory area from srs to dest
 * @src: the source
 * @dest: the destination
 * @n: no. of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n, k = 0;

	while (k < i)
	{
		dest[k] = src[k];
		n--;
		k++;
	}
	return (dest);
}
