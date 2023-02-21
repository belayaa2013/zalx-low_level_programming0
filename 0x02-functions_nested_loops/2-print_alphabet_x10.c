#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
*/
void print_alphabet_x10(void)
{
	char A;
	int k;

	for (k = 0 ; k < 10 ; k++)
	{
	for (A = 'a' ; A <= 'z' ; A++)
	{
		_putchar(A);
	}
		_putchar('\n');
	}
}
