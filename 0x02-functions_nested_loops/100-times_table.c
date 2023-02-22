#include "main.h"
/**
 * void print_times_table - a function which prints n times table
 * @n: an integral a multiple of two numbers
 * Return: succcess
 */
void print_times_table(int n)
{
	int l, m;

	for (n = 0 ; n <= 15; n++)
	{
		for (l = 0 ; l <= 15; l++)
		{
			m = n * l;
			if (l == 0)
			{
				_putchar(m + '0');
			}
			if (m < 10 && l != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (m >= 10 && m < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else if (m >= 100)
			{

		}
		_putchar('\n');
	}
}
