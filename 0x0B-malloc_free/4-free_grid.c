#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2d array memory
 *
 * @grid: int
 *
 * @height: int
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
