#include <stdio.h>
/**
 * main - a function that prints 50 fibonacci numbers starting from 1 and 2
 * Return: 0(success)
 */
int main(void)
{
	int n;

	long int i, j,  sum;

	n = 1;

	i = 1;
	j = 2;
	sum = i + j;

	printf("%lu, %lu, ", i, j);
	while (n < 49)
	{
		sum = i + j;
		if (n < 48)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}
		i = j;
		j = sum;
		n++;
	}
	return (0);
}

