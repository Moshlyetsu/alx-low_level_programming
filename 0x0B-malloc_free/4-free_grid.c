#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -> must free a given two dimentional array
 * @grid: the given inputed 2 dimentional grid
 * @height: the given height of the dimension of grid
 * Description: has to free the memory of a grid
 * Return: must be voided
 *
 */

void free_grid(int **grid, int height)
{

	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
