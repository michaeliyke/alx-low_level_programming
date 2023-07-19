#include <stdlib.h>

/**
 * int_index - returns index of the first element matched by cmp
 * @array: list of integers
 * @size: array size
 * @cmp: function to determine a matching case
 *
 * Return: the index of first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
