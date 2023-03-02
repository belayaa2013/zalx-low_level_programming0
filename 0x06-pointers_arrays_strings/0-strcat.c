#include "main.h"
/**
 * _strcat - a function that concatenate two strings
 * @dest: a string to be concatenate
 * @src: a string to be concatenate
 * Return: know return is dest
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
       while(src[m] != '\0')
       {
	       m++;
	       dest[n] = src[m];
	       n++;
       }
       dest[n] = '\0';
       return (dest);
}

