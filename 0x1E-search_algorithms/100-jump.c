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
	double m; /* The block size */
	size_t left = 0, right;
	char temp[] = "Value found between indexes ";

	if (array == NULL)
		return (-1);
	m = sqrt((double)size); /* don’t forget to compile with -lm */
	for (right = m; left < size && right < size; left += m, right += m)
	{
		if (right >= size) /* Esnure boundary is within the array */
			right = size - 1;

		/* Degrade to linear search if value is missing/within block */
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		if (array[right] >= value)
		{
			for (; left <= right; left++)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       left, array[left]);
				if (array[left] == value)
				{
					printf("%s[%lu] and [%lu]\n", temp, left, right);
					return (left);
				}
			}
			printf("%s[%lu] and [%lu]\n", temp, left, right);
			return (-1);
		}
	}
	printf("%s[%lu] and [%lu]\n", temp, left, right);
	return (-1);
}
