#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function frees 2 dimentional grid
 * @grid: to be free/the pointer
 * @height: argv
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < heght; i++)
		free(grid[i]);
	free(grid);
}

