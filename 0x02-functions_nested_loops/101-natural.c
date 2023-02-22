#include <stdio.h>
/**
 * main - a function that prints sum of multiples of 3 or 5
 * Return: 0(success)
 */
int main(void)
{
	int n;

	int sum;

	sum = 0;

	for (n = 0 ; n < 1024 ; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
			printf("%d\n");
		}
		return (0);
	}
}
