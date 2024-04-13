#include "search_algos.h"

/**
 * print_array - prints array
 * @array: array
 * @size: size
 *
 * Return: void
 */
void print_array(int *array, size_t size)
{
	int i;

	printf("Searching in array: ");
	for (i = 0; i < (int)size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm. This optimizes to return the first
 * occurence of value
 * @array: pointer to the first element of the array to search in
 * @left: the left index
 * @right: the right index
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is absent
 */
int binary_search_recursive(int array[], int left, int right, int value)
{
	int mid;

	if (right >= left)
	{
		mid = left + (right - left) / 2;
		if ((mid == 0 || value > array[mid - 1]) && array[mid] == value)
			return (mid);
		if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1,
							right, value));
		return (binary_search_recursive(array, left, mid - 1, value));
	}
	return (-1);
}

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
	int result, mid;

	if (array == NULL || size <= 0)
		return (-1);
	print_array(array, size);
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
	/* print_array(array, size); */
	return (advanced_binary(array, mid, value));
}
