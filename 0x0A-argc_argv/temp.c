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

	return table[amount];
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
	return dp[amount];
}
