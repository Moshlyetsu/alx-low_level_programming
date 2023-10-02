#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -> function with nested loop to produce a grid
 * @width: the given width input
 * @height: the given height input
 * Return: must be the pointer to the two dimentional array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int l;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		grid[l] = malloc(sizeof(int) * width);

		if (grid[l] == NULL)
		{
			for (; l >= 0; l--)
				free(grid[l]);

			free(grid);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (k = 0; k < width; k++)
			grid[l][k] = 0;
	}

	return (grid);
}
