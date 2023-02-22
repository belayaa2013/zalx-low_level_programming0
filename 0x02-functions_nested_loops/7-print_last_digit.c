#include "main.h"
/**
 * print_last_digit - a function prints the last digit
 * @i: a number tobe checked
 * Return: j will be the return value
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}


