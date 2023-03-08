#include "main.h"
/**
 * check_num - a function that checks the divisibility of n by i
 * @n: the dividend
 * @i: the divider
 * Return: 0 or 1
 */
int check_num(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (check_num(n, i + 1));
				}
				return (0);
				}
/**
 * is_prime_number - a function that checks the number is prime or not
 * @n: the number
 * Return: o or 1
 */
int is_prime_number(int n)
{
int i = 0;
i = 2;
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (check_num(n, i));
}
