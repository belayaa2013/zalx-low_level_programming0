#include <stdio.h>
/**
 *main - a function to lis a to z
 *putchar prints a character
 *Return: 0(success)
*/
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
