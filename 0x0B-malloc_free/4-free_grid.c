#include <stdlib.h>

/**
 * free_grid - frees a 2-d array created with malloc
 * @grid: 2-d array grid
 * @height: the number of rows contained
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
