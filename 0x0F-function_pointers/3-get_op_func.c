#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform an operation
 * @s: input string
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i = 0;
	char *op;

	while (ops[i].op != NULL)
	{
		op = ops[i].op;
		if (*op == *s || (strlen(s) == 3 && *(s + 1) == *op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
