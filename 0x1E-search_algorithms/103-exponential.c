#include "search_algos.h"

/**
 * BS = Binary Search algorithm
 */
static int BS(int array[], int left, int right, int value)
{
	int mid, i;

	while (left <= right)
	{
		mid = (left + right) >> 1;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (value == array[mid])
		{
			return (mid);
		}

		if (value < array[mid]) /* value lies to the left of mid */
			right = mid - 1;
		else /* value lies to the right of mid */
			left = mid + 1;
	}
	return (-1);
}

/**
 * min - get the minimum value among two constants
 * @a: first variables
 * @b: second variable
 *
 * Return: The smaller valriable
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);

	/* printf("Value checked array[%d] = [%d]\n", mid, array[mid]); */
	if (array[0] == value)
		return (i);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	       i / 2, min(i, size - 1));
	return (BS(array, i / 2, min(i, size - 1), value));
}
