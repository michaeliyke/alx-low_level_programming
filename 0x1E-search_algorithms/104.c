#include "search_algos.h"

int binary_search_recursive(int *array, int size, int value)
{
	int mid = size >> 1, result;

	if (size <= 0 || array == NULL)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);
	if (array[mid] == value) /* Returns the first occurence always */
		if (mid == 0 || array[mid - 1] != value)
			return (mid);

	if (value > array[mid])
	{
		mid++; /* Adjusts to handle subarray searching */
		result = binary_search_recursive(array + mid, size - mid, value);
		return (result == -1 ? -1 : mid + result);
	}
	return (binary_search_recursive(array, mid, value));
}
