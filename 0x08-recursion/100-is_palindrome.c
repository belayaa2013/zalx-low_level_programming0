#include "main.h"
/**
 * _strlen_recursion - a function that counts the string length
 * @s: the string that is counted its characters
 * Return: 0 if it's not a sstring or numbers
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
			}
/**
 * _pali - a function that checks different location characters are same or not
 * @s: the string
 * @p: location of the character
 * Return: 0 or 1
 */
int _pali(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}
	if (*s == *(s + p))
	{
		return (_pali(s + 1, p - 2));
	}
	return (0);
}
/**
 * is_palindrome - a function that checks the string is palindrome
 * @s: the string to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int leng = _strlen_recursion(s);

	return (_pali(s, leng - 1));
}
