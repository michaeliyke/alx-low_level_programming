#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: integer index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right, i, m; /* The block size */
	char temp[] = "Value found between indexes ";

	if (array == NULL)
		return (-1);
	m = (size_t)sqrt((double)size); /* don’t forget to compile with -lm */
	for (right = m + left; left < size; left += m, right += m)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		if ((right < size && array[right] >= value) || right >= size)
		{
			printf("%s[%lu] and [%lu]\n", temp, left, right);
			for (i = left; i <= right && i < size; i++)
			{
				if (i >= size)
					return (-1);
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
