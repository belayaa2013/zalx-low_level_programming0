#include <stdio.h>
/**
 * main - a finction to print hexadecimal
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char h;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (h = 'a' ; h < 'g' ; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
