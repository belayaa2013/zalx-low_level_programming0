#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name
 * @name: char pointer
 * @f: pointer to function
 * Return: type is void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
