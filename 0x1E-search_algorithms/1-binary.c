#include "search_algos.h"
/**
 * print_array - printing an array
 * @arr: the array
 * @left: lower
 * @right: high
 *
 * Return: void
 */
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
	size_t left = 0, right = size - 1, mid, i;
	int cv;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) >> 1;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		cv = array[mid]; /* current value */
		if (cv == value)
			return (mid);
		if (cv < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
