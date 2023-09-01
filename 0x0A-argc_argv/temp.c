#include "main.h"

int min__coins(int coins[], int amount, int num_coins)
{
	int a, j, v, *table = malloc(sizeof(int) * (amount + 1));

	if (table == NULL)
		return (-1);
	table[0] = 0; /* case of amount 0 */
	for (a = 1; a <= amount; a++)
	{
		table[a] = INT_MAX;
		for (j = 0; v = coins[j], j < num_coins; j++)
			if (a >= v)
				table[a] = min(table[a], table[a - v] + 1);
	}

	return (table[amount]);
}

int mincoins(int coins[], int amount, int num_coins)
{
	/* Table of amounts from 0 to amount */
	int amnt, j, coin, *dp = malloc(sizeof(int) * (amount + 1));

	dp[0] = 0; /* case of amount 0 */
	/**
	 * Iterate through each amount and calculate the minimum
	 * coins needed
	 */
	for (amnt = 1; amnt <= amount; amnt++)
	{
		/* Initialize values of arr to INT_MAX except arr[0] */
		dp[amnt] = INT_MAX;

		/**
		 * Try each available coin to find the optimal solution
		 */
		for (j = 0; coin = coins[j], j < num_coins; j++)
		{
			/**
			 * If the current coin value is less than or equal to
			 * the amount
			 */
			if (amnt >= coin)
			{
				/**
				 * Update dp[i] with the minimum of its current
				 * with the mimimum of its current value and
				 * the value obtained by substracting the coin
				 * value and adding 1 (one more coin)
				 */
				dp[amnt] = min(dp[amnt], dp[amnt - coin] + 1);
			}
		}
	}
	/**
	 * The value at dp[amount] now contains the minimum number of coins
	 * needed to make the given amount
	 */
	return (dp[amount]);
}

/**
 * min_of_coins - returns the minimum number of coins to make change
 * @count: number of coins
 * @values: coin values
 * @amount: the amount to make change for
 *
 * Return: returns the combined minimum number of coins to make change
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

	table[0] = 0; /* The zero case */
	for (amount = 1; amount <= total_amount; amount++)
	{
		table[amount] = INT_MAX;
		value = *values;
		for (; i < count && amount >= value; i++, value = values[i])
		{
			rem = amount - value;
			table[amount] = min(table[amount], table[rem] + 1);
		}
	}
	return (table[total_amount]);
}
