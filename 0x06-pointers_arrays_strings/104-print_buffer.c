#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a function that prints a buffer
 * @b: the buffer
 * @size: the buffer contained in
 * Return: is not always zero
*/
void print_buffer(char *b, int size)
{
	k = 0;

	int i = 0, j = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("08x: ", k);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf("  ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int n = *(b + k + i);

			if (n < 32 || n > 132)
			{
				n = '.';
			}
			printf("%c", n);
		}
		printf("\n");
		k += 10;
	}
}
