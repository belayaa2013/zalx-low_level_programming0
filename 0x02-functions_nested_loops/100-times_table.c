#include "main.h"
/**
 * print_times_table - a function which prints n times table
 * @n: an integral a multiple of two numbers
 * Return: succcess
 */
void print_times_table(int n)
{
	int l, m, k;

	for (n = 0 ; n <= 15; n++)
	{
		for (l = 0 ; l <= 15; l++)
		{
			m = n * l;

			if (m < 10)
			{
				if (n == 15)
				{
					_putchar(m + '0');
					else if
						_putchar(m + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
			}
			else if (m >= 10 && m < 100)
			{
				if (n == 15)
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
					else if
						_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			}
		}
		else if (m >= 100)
		{
			k = m % 100;
			if (n == 15)
				_putchar((m / 100) + '0');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				else if
					_putchar((m / 100) + '0');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
