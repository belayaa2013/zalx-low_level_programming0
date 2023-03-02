#include "main.h"
/**
 * reverse_array - a function that prints elements of the array in reverse order
 * @a: the array
 * @n: elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
