#include "main.h"
/**
 * int print_sign - function that lables a number as positive negative or zero
 * @n: a number to be checked
 * Return: 0 1 0r -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	/*	_putchar(',');*/
	/*	_putchar(' ');*/
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	/*	_putchar(',');*/
	/*	_putchar(' ');*/
		return (0);
	}
	else if (n < 0)
	{
	/*	_putchar('-');*/
	/*	_putchar(',');*/
	/*	_putchar(' ' );*/
		_putchar('-');
		return -1;
	}
	return ('\n');
}
