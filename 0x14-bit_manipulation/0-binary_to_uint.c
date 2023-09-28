#include "main.h"

/**
 * binary_to_uint - entry handler for binary to unsigned int conversion
 * @b: binary string which is to be converted to unsigned int
 *
 * Return: returns the resulting unsigned integer
 *
 * STEPS
 * ----
 * make an array with the number of chars
 * fill with 0s at first
 * loop through str and assign a number to each member of the array
 * starting from 1, each number should be twice the preceeding one
 * however, a skip a member whose associated char value is 0
 * yet double the number for calc purposes but do not assign
 * Loop through the members of the array and return the sum
 */
unsigned int binary_to_uint(const char *b)
{
	int len = _strlen((char *)b);
	int *values = malloc(sizeof(int) * len);
	int i, value = 1;
	unsigned int sum = 0;

	if (values == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		values[i] = 0; /* Default value */
		if (b[len - i - 1] == '0' + 1)
			/* from the right, change only if the bit is 1 */
			values[i] = value;
		value = value << 1;
	}
	for (i = 0; i < len; i++)
		sum += values[i];
	free(values);
	return (sum);
}

/**
 * _strlen - returns length of a string
 * @string: input string whose length is needed
 *
 * Return: length of string
 */
int _strlen(char *string)
{
	char *pointer = string;

	if (string == NULL || *string == '\0')
		return (0);
	while (*string != '\0')
		++string;
	return ((string - pointer));
}
