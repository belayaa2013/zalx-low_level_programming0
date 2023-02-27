#include "main.h"
/**
 * swap_int - a function that swaps a value
 * @a: a value to be swapped
 * @b: to be swapped
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

