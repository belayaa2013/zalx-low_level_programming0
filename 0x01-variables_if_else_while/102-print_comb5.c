#include <stdio.h>
/**
 * main - a functio to print two digit less than hunderd
 * Return: 0(success)
 */
int main(void)
{
	int l;
	int m;

	for (l = 0 ; l < 10 ; l++)
		for (m = 0 ; m < 10 ; m++)
		{
			if (l < m)
			{
			putchar(l + '0');
			putchar(m + '0');
			putchar(' ');
			}
			else
			{
				break;
			}

