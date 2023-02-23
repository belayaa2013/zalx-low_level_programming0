#include "main.h"
/**
 * positive_or_negative - a function identifies positive,negative or zero
 * @i: the character to be checked
 * Return: success
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
}
