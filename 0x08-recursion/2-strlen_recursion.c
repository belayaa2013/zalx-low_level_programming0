#include "main.h"
/**
 * _strlen_recursion - a function that returns the string length
 * @s: the string to be checked
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
