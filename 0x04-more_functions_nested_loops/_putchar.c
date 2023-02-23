#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function which prints only a single character
 * @c: the character to be printed
 * Return: it's either 1
 * On error: -1 return a value
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

