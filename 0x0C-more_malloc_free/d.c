#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char num1[200], num2[200];
	char result_arr[400] = {'\0'};
	int left_shift = 0, partial_result, carry, k, i, j;
	size_t len, n1 = strlen(num1);
	size_t n2 = strlen(num2);

	fgets(num1, 200, stdin);
	fgets(num2, 200, stdin);
	for (i = n2 - 2; i >= 0; i--)
	{
		carry = 0, k = left_shift;
		for (j = n1 - 2; j >= 0; j--)
		{
			partial_result = (num1[j] - '0') * (num2[i] - '0') + carry;
			if (result_arr[k])
				partial_result += result_arr[k] - '0';
			result_arr[k++] = partial_result % 10 + '0';
			carry = partial_result / 10;
		}
		if (carry > 0)
			result_arr[k] = carry + '0';
		left_shift++;
	}
	/* printf("%s\n", result_arr); */

	len = strlen(result_arr);
	for (i = len - 1; i >= 0; i--)
		printf("%c", result_arr[i]);
	printf("\n");
	return (0);
}