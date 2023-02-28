#include "main.h"
/**
 * re_string - a function that prints a string in reverse
 * @s: a string to be reversed
 */
void rev_string(char *s)
{
	char rv = s[0];

	int c = 0, i;

	for (; s[c] != '\0'; c++)
	{
	for (i - 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
	}
}

