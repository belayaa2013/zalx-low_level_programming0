#include "main.h"
/**
 * string_toupper - a function that convert to upper case
 * Return: elements of the array in uppercase
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; n[i] != '\0'; n++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 22;
	}
	return (n);
}

