#include "main.h"
/**
 *_atoi - a function that converts a string to an integer
 * @s: a string to be changed
 * Return: n*j
 */
int _atoi(char *s)
{100-atoi.c
	int k = 0;
	 int j = 1;
	 int i = 0;
	int num = 0, n = 0,
	    int l = 0;
	while (s[l] != '\0')
		 i++
			 while (i < l && k == 0)
			 {
				 if (s[i] == '-')
					 ++j;
				 if (s[i] >= '0' && s[i] <= '9'')
				 {
					 num = s[i] - '0'
						 if (j % 2)
							 num = -num
							 n = n * 10 + num;
					 k = 1;
					 if (s[i + 1] < '0' || s[i + 1] > '9')
						 break;
					 k = 0;
				 }
				 i++;
			 }
	 if (k == 0)
		 return (0);
	 return (n);
}
