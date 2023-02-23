#include "main.h"
/**
 * _isupper - a function that identifies letter type
 * @c: a character to be checked
 * Return: either 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
