#include "main.h"
/**
 * print_alphabet - a function that lists lower case alphabets
 * Return: 0(success)
 */
void print_alphabet(void)
{
	char  A;

	for (A = 'a' ; A <= 'z' ; A++)
		_putchar(A);
	_putchar('\n');
}
