#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat(NULL, NULL, 2);
	printf("%sTEST\n", concat);
	free(concat);
	return (0);
}
