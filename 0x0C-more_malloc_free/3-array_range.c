#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int size, *range, i;

	if (max < min)
		return (NULL);
	size = (max + 1 - min);
	range = malloc(sizeof(*range) * size);
	if (range == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		range[i] = min++;
	}
	return (range);
}
