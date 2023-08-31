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
	int num = 0, i, ret;
	/* int coins[] = {1, 5, 6, 9}; */
	int coins[] = {5, 10, 20, 50};
	int num_of_coins = sizeof(coins) / sizeof(int);

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
	for (i = 0; i < num_of_coins; i++)
	{
		if (coins[i] < num)
			break;
	}
	if (i == num_of_coins)
	{
		printf("0\n");
		return (-1);
	}
	ret = min_of_coins(num, coins, num_of_coins);
	printf("%d\n", ret < 0 ? 0 : ret);
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

/**
 * min_of_coins - returns the minimum number of coins to make change
 * @count: number of coins
 * @values: coin values
 * @amount: the amount to make change for
 *
 * Return: returns the combined minimum number of coins to make change
 *
 * EXPLANATION OF THE MATHS: table[a] = min(table[a], table[rem] + 1);
 * We want to fill/replace the slot table[a], so we do the following:
 * a = table[a] --- get the value on the slot earlier
 * b = table[rem]+1 --- gets the already stored value of table[rem]
 * 	and adds 1 to it. More details shortly.
 * Then: table[a] = min(a, b) --- assigns the min of a and b to table[a]
 *
 * DETAILS OF table[rem]+1
 * recall that the function uses memoization, a dynamic programming technique.
 * Memoization is a technique that simply re-uses the value of previous comput-
 * ation to achieve a result rather than redoing the computation. Therefore,
 * in table[rem], rem is the remainder after you substract value from amount.
 * Since the for loop mentions that amount>=value, so rem is a postive value
 * less than amount. Since the iteration is on amount, rem has already been
 * computed and stored in the table. We can simply fetch and reuse it.
 * The +1 in table[rem]+1 simply adds 1 to the value turned up by table[rem]
 * because when we did rem = amount - value --- we seem to set one value aside
 * to focus on the remainder result, so +1 is how we restore that value into
 * the calculation.
 */
int min_of_coins(int total_amount, int values[], int count)
{
	int amount, /* a unit amount between 0 and total_amount */
	    i = 0,  /* counter */
	    rem,    /* remainder after subtracting the coin of choice */
	    value;  /* each coin value */

	/**
	 * Table to store the list of amounts from 0 to total_amount
	 * and their corresponding minimum number of coins
	 */
	int *table = malloc(sizeof(int) * count);

	if (table == NULL)
		return (-1);
	table[0] = 0; /* The zero case */
	for (amount = 1; amount <= total_amount; amount++)
	{
		table[amount] = INT_MAX; /* preserves slot for comparison */
		value = *values;
		for (; i < count && amount >= value; i++, value = values[i])
		{
			rem = amount - value; /* this is the remainder */
			table[amount] = min(table[amount], table[rem] + 1);
			/* See comment sections for details of maths */
		}
	}
	return table[total_amount];
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