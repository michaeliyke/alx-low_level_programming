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
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) >> 1;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
