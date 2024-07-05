#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer
 * @width: the grid
 * @height: the grid
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, ii;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (ii = 0; ii < i; ii++)
			{
				free(grid[ii]);
			}
			free(grid);
			return (NULL);
		}
		for (ii = 0; ii < width; ii++)
		{
			grid[i][ii] = 0;
		}
	}
	return (grid);
}
