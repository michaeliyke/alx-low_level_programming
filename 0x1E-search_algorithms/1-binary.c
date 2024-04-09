#include "search_algos.h"

static void print_array(int arr[], size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is absent
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	int cv;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		cv = array[mid]; /* current value */
		if (value < cv)
			right = mid - 1;
		else if (value > cv)
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
