#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 *  Return: strTemp
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	unsigned int i = 0, j = 0, l = 0, l1 = 0;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[l1])
		l1++;
	temp = malloc(sizeof(char) * (l + l1 + 1));
	if (temp == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < l)
		{
			temp[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (l + l1))
		{
			temp[i] = s2[j];
			i++;
			j++;
		}
	}
	temp[i] = '\0';
	return (temp);
}

