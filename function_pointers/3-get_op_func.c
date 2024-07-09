#include "3-calc.h"
/**
 *get_op_func - executes correct operation 
 *@s: operator to be used
 * Return: return index of first match or -1
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i, 0] != s)
		i++;

	return (ops[i, 1]);
}
