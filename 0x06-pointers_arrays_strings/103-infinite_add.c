#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: one of the numbers
 * @n2: the other number
 * @r: the buffer
 * @size_r: the buffer size
 * Return: the function must return the pointer value or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l =0, t = 0, d = 0, f = 0;

	for (; *(n1 + i) != '\0'; i++)
		for (; *(n2 + j) != '\0'; j++)
			i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || f == 1)
	{
		if (i < 0)
			k = 0;
		else
			k = *(n1 + i) - '0';
		if (j < 0)
			l = 0;
		else
			l = *(n2 + j) - 0;
		t = k + l + f;
		if (t >= 10)
			f = 1;
		else
			f = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	return (r);
}
