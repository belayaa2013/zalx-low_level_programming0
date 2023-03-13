#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints Minimum number of coins to make change
 * @argc: size of argv array
 * @argv: An array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c = 0, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	while (sum / 25)
	{
		sum -= 25;
		c++;
	}
	while (sum / 10)
	{
		sum -= 10;
		c++;
	}
	while (sum / 5)
	{
		sum -= 5;
		c++;
	}
	while (sum / 2)
	{
		sum -= 2;
		c++;
	}
	c += sum;
	printf("%d\n", c);
	return (0);
}
