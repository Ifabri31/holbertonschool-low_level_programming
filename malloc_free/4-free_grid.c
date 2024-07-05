#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid created by alloc_grid
 * @grid: pointer to the array
 * @height: the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid);
	}
}
