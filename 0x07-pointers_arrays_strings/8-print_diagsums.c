#include "main.h"

/**
 * print_diagsums - prints sum of the 2 diagonals of a square matrix
 * @a: a squre matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sumD2 = 0, sumD1 = 0, D2 = size - 1, D1 = 0;

	for (i = 0; i < (size * size); i++)
	{
		/* printf("%d ", a[i]); */
		if (i + 1 >= size && (i + 1) % size == 0)
		{
			/* printf("( %d, %d)", a[i - D1], a[i - D2]); */
			sumD2 += a[i - D2];
			sumD1 += a[i - D1];
			D2--;
			D1++;
			/* putchar('\n'); */
		}
	}

	printf("%d, %d\n", sumD2, sumD1);
}
