#include "main.h"
/**
 * _islower - is a function which checks the lower case character
 *@c : to be printed
 * Return: 0 and 1 (success)
 * int c - any alphabet in integer
 * c_islowerc - identify the lower case letter
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
