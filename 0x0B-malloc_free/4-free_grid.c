#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Function that frees the memory allocated to grid
 * @grid: the grid to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
