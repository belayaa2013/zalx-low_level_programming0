#include "main.h"
/**
 * factorial - a function that prints the factorial of a number
 * @n: the number that factorial is gonna done
 * Return:1 -1 or n
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}

