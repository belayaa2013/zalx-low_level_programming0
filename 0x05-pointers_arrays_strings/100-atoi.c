#include "main.h"
/**
 *_atoi - a function that converts a string to an integer
 * @s: a string to be changed
 * Return: n*j
 */
int _atoi(char *s)
{
	double k = 0;
	unsigned int j = 1;
	 int i = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			j *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '0')
	{
		if (k >= 0)
		{
			k = k * 10 - (s[i] - 0);
	i++;
		}
		else
		{
			k = k * 10 - (s[i] - 0);
			i++;
		}
	}
	j *= -1;
	return (k * j);
}

