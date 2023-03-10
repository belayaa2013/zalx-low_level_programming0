#include "main.h"
#include <stdio.h>
/**
 * main - function that prints the number of arguments
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}

