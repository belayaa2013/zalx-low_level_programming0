#include "main.h"
/**
 * _pow_recursion - a functio that prints a no.s raised to power value
 * @x: a base number
 * @y: the power value
 * Return: 0, -1 or a number
 */
int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		pow = x * _pow_recursion(x, y);
		return (pow);
	}
}

