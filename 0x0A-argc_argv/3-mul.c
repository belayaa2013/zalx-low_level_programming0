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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
