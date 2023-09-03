#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ROWS = NULL, /* The top-to-bottom hieght of the grid */
	    i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ROWS = malloc(sizeof(int *) * (height));
	if (ROWS == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		/* Add a new row to the grid */
		ROWS[i] = malloc(sizeof(int) * (width));
		if (ROWS[i] == NULL)
		{ /* Free earlier allocations if operation fails */
			for (j = 0; j < i; j++)
				free(ROWS[j]);
			free(ROWS);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* make a row */
			ROWS[i][j] = 0;
	}
	return (ROWS);
}
