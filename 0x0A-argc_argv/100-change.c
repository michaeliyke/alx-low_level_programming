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
	int coins[] = {1, 2, 5, 10, 25};
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
	{ /* Check if any of the coins can make change for amount */
		if (coins[i] < num)
			break;
	}
	if (i == num_of_coins)
	{ /* If not, return quickly */
		printf("0\n");
		return (-1);
	}
	ret = min_of_coins(num, coins, num_of_coins);
	printf("%d\n", ret == INT_MAX ? 0 : ret);
	return (0);
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
	int amount,  /* a unit amount between 0 and total_amount */
	    a, b, i, /* temporary variables and counter */
	    rem,     /* remainder after subtracting the coin of choice */
	    value;   /* each coin value */

	/**
	 * Table to store the list of amounts from 0 to total_amount
	 * and their corresponding minimum number of coins
	 */
	int *table = malloc(sizeof(int) * (total_amount + 1));
	/* int table[22]; */

	if (table == NULL)
		return (-1);
	table[0] = 0; /* The zero case */
	for (amount = 1; amount <= total_amount; amount++)
	{
		table[amount] = INT_MAX; /* preserves slot for comparison */
		value = *values, i = 0;
		for (; i < count && amount >= value; i++, value = values[i])
		{
			rem = amount - value; /* this is the remainder */
			a = table[amount];
			b = table[rem] == INT_MAX ? INT_MAX : table[rem] + 1;
			table[amount] = min(a, b);
			/* See comment sections for details of maths */
		}
	}
	return (table[total_amount]);
}

/**
 * min_coins - minimum number of coins to make change for an amount of money
 * @amount: total amount to make chnage for
 * @coins: coin denominations for making change
 * @total_coins: number of coins provided
 *
 * Return: The minimum total number of coins to make change
 */
int min_coins(int amount, int coins[], int total_coins)
{
	int *table = malloc(sizeof(int) * (amount + 1));
	int j, a, v, rem, x, y;

	table[0] = 0; /* zero case */
	for (a = 1, v = *coins; a <= amount; a++)
	{
		table[a] = INT_MAX; /* getting ready */
		for (j = 0; j < total_coins && a >= v; j++, v = coins[j])
		{
			rem = a - v;  /* Get the remainder */
			x = table[a]; /* last value on table[a] */
			y = table[rem] == INT_MAX ? INT_MAX : table[rem] + 1;
			table[a] = min(x, y); /* the lil maths */
		}
	}
	return (table[amount]);
}
