#include <stdio.h>
#include <stdlib.h>

int min_coins_grdy_(int, int[], int);
void print_tests(int coins[], int num_of_coins);

/**
 * main_bak - entry point of program
 * @argc: the argument count
 * @argv: argument values
 *
 * Return: 0 always
 *
 *
 * Now, the following, you first get the number of 25 cents coin, then
 * you get the rest,
 * you get the number of 10 cents coin ......
 * each time you get the rest, and then you sum up all these to be
 * printed
 * the variables below are going to help me store how many of each coin to use
 * cents will store the second argument retrieved from *argv[]
 * n_25 to n_1 will store all the number of coints of value 25 ... 1
 * rest will be used to calculate each time how many cents remains after
 * getting the previous largest coin
 * Important to notice that we move from the largest coin to the smallest,
 * to insure we use the smallest possible number
 */
int main_bak(int argc, char *argv[])
{
	int cents, n_25 = 0, n_10 = 0, n_5 = 0, n_2 = 0, n_1 = 0, rest = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	n_25 = cents / 25;
	rest = cents - n_25 * 25;
	n_10 = rest / 10;
	rest = rest - n_10 * 10;
	n_5 = rest / 5;
	rest = rest - n_5 * 5;
	n_2 = rest / 2;
	rest = rest - n_2 * 2;
	n_1 = rest;
	printf("%d\n", n_25 + n_10 + n_5 + n_2 + n_1);

	return (0);
}

/**
 * main - entry point of program
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int cents, coins[] = {9, 6, 5, 1};
	/* int cents, coins[] = {25, 10, 5, 2, 1}; */
	int num_of_coins = sizeof(coins) / sizeof(int);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	printf("Coins: {9, 6, 5, 1}\n\n");
	printf("%d: %d\n", cents, min_coins_grdy_(cents, coins, num_of_coins));
	printf("\n\nOTHERS TESTS: \n");
	print_tests(coins, num_of_coins);
	return (0);
}

/**
 * min_coins_grdy_ - gets the minimum number of coins change for an amount
 * @amount: the amount to make change for
 * @coins: available coin denominations with infinite supply
 * @num_of_coins: n u,ber of available coin denominations
 *
 * Return: the minimum number of coins to make change for amount
 * This implementation uses the greedy approach because it starts from
 * the biggest coin values first. It will fail for certain combinations
 * E.g coins {1,5,6,9}, amount = 11
 * It will return 3 but the answer is 2
 * But it is not limited by space like the dynamic programming approach
 * which uses memoization.
 */
int min_coins_grdy_(int amount, int coins[], int num_of_coins)
{
	int i, rest, total = 0;
	int *values = malloc(sizeof(int) * (num_of_coins));

	if (values == NULL)
		return (0);
	/**
	 * coins is must be in ascending order
	 * otherwise implementtation failes
	 */
	for (i = 0, rest = amount; i < num_of_coins; i++)
	{
		values[i] = rest / coins[i]; /* store value against addition */
		rest = rest - (values[i] * coins[i]);
	}
	while (--i >= 0)
	{
		total += values[i];
	}

	return (total);
}

/**
 * print_tests - testing
 * @coins: arg
 * @num_of_coins: arg
 *
 * Return: void
 */
void print_tests(int coins[], int num_of_coins)
{
	printf("10: %d\n", min_coins_grdy_(10, coins, num_of_coins));
	/* 1 */
	printf("100: %d\n", min_coins_grdy_(100, coins, num_of_coins));
	/* 4 */
	printf("101: %d\n", min_coins_grdy_(101, coins, num_of_coins));
	/* 5 */
	printf("13: %d\n", min_coins_grdy_(13, coins, num_of_coins));
	/* 3 */
	printf("98: %d\n", min_coins_grdy_(98, coins, num_of_coins));
	/* 7 */
	printf("837645: %d\n", min_coins_grdy_(837645, coins, num_of_coins));
	/* 33507 */
	printf("2147483647: %d\n",
	       min_coins_grdy_(2147483647, coins, num_of_coins));
	/* 85899348 */
}
