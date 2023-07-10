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
	int **D2 = NULL, *D2i = NULL, i, j;

	if (width <= 0 || height <= 0)
		return (D2);

	D2 = malloc(sizeof(*D2) * height);
	if (D2 == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		D2i = malloc(sizeof(*D2i) * width);
		if (D2i == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			D2i[j] = 0;
		D2[i] = D2i;
	}
	return (D2);
}
