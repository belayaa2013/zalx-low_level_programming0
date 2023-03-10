#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, j;
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	printf("error\n");
	return (1);
}

