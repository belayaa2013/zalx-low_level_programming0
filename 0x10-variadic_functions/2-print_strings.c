#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  print_strings - Print strings
 *  @separator: String beetween numbers
 *  @n: Number of args
 *  Return return type
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
