#include <stdio.h>
/**
 * main - a functio to print two digit less than hunderd
 * Return: 0(success)
 */
int main(void)
{
	int l;
	int m;

	for (l = 0 ; l < 100 ; l++)
		for (m = 0 ; m < 100 ; m++)
		{
			putchar(l + '0');
			putchar(m + '0');
			putchar(' ');
