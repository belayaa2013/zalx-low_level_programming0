#include <stdlib.h>
/**
 * *string_nconcat - Concatinates two strings
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * @n: unsigned int
 *
 * Return: Pointer to s1, n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c = 0, r = 0, i, j;
	char *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c] != '\0')
		c++;
	while (s2[r] != '\0')
		r++;
	if (n > r)
	{
		n = r;
	}
	temp = malloc(sizeof(char) * (c + (n + 1)));
	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		temp[i] =  s1[i];
	}
	for (j = 0; j < n; j++)
	{
		temp[i] = s2[j];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
