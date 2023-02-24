#include "main.h"
/**
 * print_line - prints a stright line
 *@n: a character to be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			if (i <= n)
				_putchar('_');
		}
		_putchar('\n');
	}
}
