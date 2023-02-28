#include "main.h"
/**
 * puts_half - a function that prints the second half of the string
 * @str: the string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		n += 1;
	}
	else
	{
		n = i / 2;
	}
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
