#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *arr = array_range(18, 37); // 4 5 6 7 8 9 10 11
	int size = 21;
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	return (0);
}
