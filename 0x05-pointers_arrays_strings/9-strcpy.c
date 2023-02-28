#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed by src
 * @dest: the return value
 * @src: that points the string
 * Return: dest is the return value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
