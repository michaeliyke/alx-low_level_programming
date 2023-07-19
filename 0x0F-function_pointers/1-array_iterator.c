#include <stdlib.h>

/**
 * array_iterator - executes a function on array elements
 * @array: array of integer elements
 * @size: size of the array
 * @action: function to execute on each array element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL || size < 1)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
