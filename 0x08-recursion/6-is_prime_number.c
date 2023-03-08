#include "main.h"
/**
 *
 *
 */
int check_num(int n, int i)
{
	if (i == n-1)
	{
		return (-1)
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (check_num(n, i + 1); 
				}
				return (0);
				}


/**
 *
 *
 */
int is_prime_number(int n)
{
int i;
i = 2;
if (n < 2)
{
return (0)
}
if (n == 2)
return (1);
}
return (check_num(n, i));
}
