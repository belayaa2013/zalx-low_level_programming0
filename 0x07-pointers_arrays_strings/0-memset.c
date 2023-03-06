#include "main.h"
/**
 * _memset - a function that fills the memory area
 * @s: the pointer points the byte to be filled in the memory space
 * @b: the constant byte filled in the memory space
 * @n: the memory area
 * Return: returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
