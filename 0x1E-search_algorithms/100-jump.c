#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: integer index or -1
 * HOW
 * block size m is determined
 * left starts from 0 and increments by m
 * right starts from m and incrments by m
 * Before increment, value is checked thus:
 * 	if value is array[left] return index left
 * 	if value is <= array[right] OR right >= size:
 * 		loop from left to right, return the first found
 * 		OR return (-1)
 * Return (-1) when done and nothing was found
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
