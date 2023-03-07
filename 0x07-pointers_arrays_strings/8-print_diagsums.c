#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the function that prints the sum of two diagonals
 * @a: the diagonal point
 * @size: size of the diagonal
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum1 += a[i * size + (size - i - 1)];
	}
	printf("%d,%d\n", sum, sum1);
}


