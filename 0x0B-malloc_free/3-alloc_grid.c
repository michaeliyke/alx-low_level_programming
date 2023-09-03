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
	    *COLS = NULL,  /* The left-to-right width of the grid */
	    i, j;

	if (width <= 0 || height <= 0)
		return (ROWS);

	ROWS = malloc(sizeof(**ROWS) * (height));
	if (ROWS == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		COLS = malloc(sizeof(*COLS) * (width));
		if (COLS == NULL)
		{ /* Free earlier allocations if operation fails */
			for (j = 0; j < i; j++)
				free(ROWS[j]);
			free(ROWS);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* make a row */
			COLS[j] = 0;
		ROWS[i] = COLS; /* Add the row to the grid */
	}
	return (ROWS);
}
