#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - convert arguments on command line to strings
 * @ac: int type
 * @av: pointer to array
 * Return: args as strings
 */
char *argstostr(int ac, char **av)
{
	int c, r, t = 0;
	char *temp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < ac; c++)
	{
		for (r = 0; av[c][r] != '\0'; r++, t++)
		{
			;
		}
	}

	temp = malloc(sizeof(char) * (t + ac + 1));

	if (temp == NULL)
	{
		return (NULL);
	}

	for (c = 0, t = 0; c < ac; c++)
	{
		for (r = 0; av[c][r] != '\0'; r++, t++)
		{
			temp[r] = av[c][r];
		}
		temp[t] = '\n';
		t++;
	}
	return (temp);
}
