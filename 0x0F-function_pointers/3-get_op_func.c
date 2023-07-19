#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - selects the aproperiate function to exeute
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
	int (*f)(int, int);

	while (ops[i].op != NULL)
	{
		op = ops[i].op;
		f = ops[i].f;
		if (*op == *s || (strlen(s) == 3 && *(s + 1) == *op))
		{
			return (f);
		}
		i++;
	}
	return (NULL);
}
