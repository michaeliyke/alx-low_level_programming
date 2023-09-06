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
	    {NULL, NULL},
	};
	op_t *op = ops;

	while (op->op != NULL)
	{
		/**
		 * check if s is a single operator char eg +
		 * Or if s is an operator char in quotes eg "+"
		 */
		if (strcmp(op->op, s) == 0 ||
		    (strlen(s) == 3 && *(s + 1) == *(op->op)))
			return (op->f);
		op++;
	}
	return (NULL);
}
