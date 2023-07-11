#include "main.h"

/**
 * free_grid - Frees memory for 2D grid
 * @grid: Grid created
 * @height: Height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
