#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a character
 * @s:the pointer
 * @to: the character
 */
void set_string(char **s, char *to)
{
	*s = to;
}