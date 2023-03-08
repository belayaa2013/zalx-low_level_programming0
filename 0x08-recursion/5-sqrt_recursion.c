#include "main.h"
/**
 * _check - a function that checks the no. weather it has a square root or not
 * @n: the number to be checked
 * @i: the square root
 * Return: the number or the square root
 */
int _check(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_check(i + 1, n));
				else if (i * i == n)
				return (i);
				return (-1);
				return (-1);
				}
/**
 * _sqrt_recursion - a function that prints the square root of a number
 * @n: the number
 * Return: -1 or the square root
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)
return (-1);
else
{
return (_check(i, n));
		}
		}
