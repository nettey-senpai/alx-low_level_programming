#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the 2d array
 * @grid: a 2d grid
 * @height: the height dimension of grid
 * Description: frees the memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

