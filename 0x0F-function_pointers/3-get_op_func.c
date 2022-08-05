#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - gets right operation as per user requirement
 *
 * @s: argument operator
 *
 * Return: pointer to function as per the operator argument
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
