#include "main.h"

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: the total number of arguments passed to the program
 * @argv: an array of string arguments passed to the program
 *
 * Return: return 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num = 0, coins[] = {1, 5, 6, 9};

	(void)argc;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", min_coins(coins, num, 4));
	return (0);
}

/**
 * min - returns the lesser value between two numbers
 * @a: value A
 * @b: value B
 *
 * Return: the lesser value between and b
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}

int min_coins(int coins[], int amount, int num_coins)
{
	int a, j, v, rem;
	int *table = malloc(sizeof(int) * (amount + 1));

	if (table == NULL)
		return (-1);
	table[0] = 0; /* case of amount 0 */
	for (a = 1; a <= amount; a++)
	{
		table[a] = INT_MAX;
		v = *coins;
		for (j = 0; a >= v && j < num_coins; j++, v = coins[j])
		{		     /* v is coin of choice */
			rem = a - v; /* After subtracting one coin */
			table[a] = min(table[a], table[rem] + 1);
			/**
			 * table[rem] - re-use prior step
			 * Now what happens if rem isn't in table
			 */
		}
	}

	return table[amount];
}