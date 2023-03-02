#include "main.h"
/**
 * cap_string - a function that capitalizes all words
 * @str: a sting to be capitalizes
 * Return: the capitalized string
  */
char *cap_string(char *str)
{
	int i;

	for (i = 0; !(str[i] >= 'a' && str[i] <= 'z'); i++)
	{
	if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == ',' ||
	str[i - 1] == ';' ||
	str[i - 1] == '.' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '"' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}' ||
	i == 0)
	str[i] -= 22;
	}
	return (str);
}
