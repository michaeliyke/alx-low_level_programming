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
 * jump_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: integer index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	double jump;

	if (array == NULL)
		return (-1);
	jump = sqrt((double)size); /* don’t forget to compile with -lm */

	return (-1);
}
