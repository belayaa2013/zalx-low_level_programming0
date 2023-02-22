#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints upto 98
 *@n: a number upto 98
 */
void print_to_98(int n)
{
	int i;
	
	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98; i++)
		{
			if (i != 98)
			printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i != 98)
			printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	} 
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
			{
				if (i != 98)
				printf("%d, ", i);
				else
					printf("%d", i);
			}
		printf("\n");
	}
	else if (n == 98)
		printf("\n");
}
