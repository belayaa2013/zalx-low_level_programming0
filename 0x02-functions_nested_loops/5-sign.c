#include "main.h"
/**
 * print_sign - A function that lables a number as positive negative or zero
 * @n: a number to be checked
 * Return: 0 1 0r -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
			_putchar('-');
		return (-1);
	}
	return ('\n');
}
