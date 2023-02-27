#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints reversly
 * @s: the array
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

