#include <stdio.h>
/**
 *main - a function will print alphabet a to z except e and q
 *Return: 0(success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
		return (0);
}

