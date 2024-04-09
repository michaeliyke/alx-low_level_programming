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
	int s = (int)size;
	int i, start = 0, end = (int)size, mid;

	do
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d", array[i]);
			if (i != end - 1)
				printf(", ");
		}
		printf("\n");
		s /= 2;
		mid = start + s;
		if (value < array[mid])
			end = end - s;
		else
			start = mid;
	} while (s >= 1);
	for (i = start; i < end; i++)
	{
		if (value == array[i])
			return (i);
	}
	return (-1);
}
