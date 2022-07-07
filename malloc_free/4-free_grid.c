#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (!grid)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
