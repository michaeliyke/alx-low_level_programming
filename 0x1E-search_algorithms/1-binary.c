#include "search_algos.h"

void print_array(int arr[], size_t left, size_t right)
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
	size_t start = 0, end = size - 1, mid, i;

	if (!array)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
