#include "main.h"
#include <stdio.h>
/**
 * print_array - a function prints elements of the array
 * @n: number of elements
 * @a: name of the array
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
			printf(", ");
	}
	printf("\n");
}

