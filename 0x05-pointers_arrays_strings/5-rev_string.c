#include "main.h"
/**
 * rev_string - a function that prints a string in reverse
 * @s: a string to be reversed
 */
void rev_string(char *s)
{
	char ch;

	int c = 0, i = 0;

	while (s[i++])
		c++;
	for (i = c - 1; i >= c / 2; i--)
	{
		ch = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = ch;
	}
}
