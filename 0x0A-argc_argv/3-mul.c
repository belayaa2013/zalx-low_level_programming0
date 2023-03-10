#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - print the result of the multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: result,error or  1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
