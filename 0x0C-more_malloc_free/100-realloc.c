#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 *  Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
