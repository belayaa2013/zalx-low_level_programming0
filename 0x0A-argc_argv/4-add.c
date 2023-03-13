#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * verify_num - a function that verifay the character is digit or not
 * @str: the string of the array
 * Return: 0 if not digit
 */
int verify_num(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!(isdigit(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - a function that prints sum of positive no.s
 * @argc: number of elements in the array
 * @argv: array vector
 * Return: erroe ,0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	i = 1;

	while (i < argc)
	{
		if (verify_num(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
