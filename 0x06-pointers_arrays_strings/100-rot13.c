#include "main.h"
/**
 * rot13 _ a function that replaces a letter with 13th letter
 * @s: the array os string to be replaced
 * Return: return the string
 */
char *rot13(char *s)
{
	int i, j;

	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == norm[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
