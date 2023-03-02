#include "main.h"
/**
 * string_toupper - a function that convert to upper case
 * @n: the poiter
 * Return: elements of the array in uppercase
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; n++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}

