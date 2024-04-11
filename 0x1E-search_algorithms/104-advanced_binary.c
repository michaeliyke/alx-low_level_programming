#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is absent
 */
int advanced_binary(int *array, size_t size, int value)
{
	int result, mid, i;

	if (array == NULL || size <= 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < (int)size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = size >> 1;
	if (value == array[mid])
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
	}

	if (value > array[mid]) /* Adjust to handle sub-array */
	{
		mid++;
		result = advanced_binary(array + mid, size - mid, value);
		return (result == -1 ? -1 : mid + result);
	}
	return (advanced_binary(array, mid, value));
}
