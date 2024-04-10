#include "search_algos.h"

/**
 * getpos - gets the position of value using the formula
 * @a: the array
 * @l: the lower
 * @h: the higher
 * @v: value
 *
 * Return: the position
 */
size_t getpos(int *a, int l, int h, int v)
{
	size_t pos = l + (((double)(h - l) / (a[h] - a[l])) * (v - a[l]));
	return (pos);
}

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * Assume that array will be sorted in ascending order
 */
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, cv, pos = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		pos = getpos(array, left, right, value);
		if (pos < left || pos >= right)
		{
			printf("Value checked array[%d] is out of range\n",
			       pos);
			return (-1);
		}
		cv = array[pos]; /* Current value 2*/
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (value == cv)
			return (pos);

		/* printf("Value checked array[%d] = [%d]\n", pos, array[pos]); */
		if (value < cv)
		{
			size = pos;
			right = pos - 1;
		}
		else /* value is greater i.e lies to the right */
			left = pos + 1;
	}

	return (-1);
}
/* [2,  3, 4, 5, 6, 7, 9, 10] */
