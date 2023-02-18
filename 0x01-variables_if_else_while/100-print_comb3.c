#include <stdio.h>
/**
 * main - A function that prints z combination of two numbers
 * Return: 0(success)
 */
int main(void)
{
	int i;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			if (i < k && i != k)
			{
				putchar(i + '0');
				putchar(k + '0');

				if (i * k != 72)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

