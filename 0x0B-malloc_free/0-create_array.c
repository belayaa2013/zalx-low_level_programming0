#include "main.h"
#include <stdlib.h>
/**
 * create_array - Returns a pointer to a newly allocated space in memory.
 * @size: unsigned int
 * @c: char
 * Return: char pointer
*/
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
