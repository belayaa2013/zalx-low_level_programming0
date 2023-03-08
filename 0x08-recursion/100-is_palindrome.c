#include " main.h"
/**
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + strlen_recursion(++s);
			}




int pali(char *s, p)
{
	if (p < 1)
	{
		return (1);
	}
	if (*s == *(s + p))
	{
		return (pali(s + 1, p - 2));
	}
	return (0);
}
/**
 * is_palindrrome -
 *
 *
 */
int is_palindrome(char *s)
{	int length = _strlen_recursion();
	return (pali(s, length - 1));
}
