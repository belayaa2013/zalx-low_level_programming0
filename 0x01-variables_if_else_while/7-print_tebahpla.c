#include <stdio.h>
/**
 * main - function to list alphabets in reverse order
 * Return: 0(success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
