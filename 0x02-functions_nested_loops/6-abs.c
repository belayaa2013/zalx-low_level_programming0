#include "main.h"
/**
 * _abs - the function that prints positive values only
 * @n: the number to be checked
 * Return: returns the positive of the number
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >=  0)
		n = n;
	return (n);
}
