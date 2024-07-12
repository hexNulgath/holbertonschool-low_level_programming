#include "3-calc.h"
/**
 *get_op_func - executes correct operation 
 *@s: operator to be used
 * Return: return index of first match or -1
 */
int (*get_op_func(char *s))(int a, int b)
{
	switch (*s)
	{
		case '+':
			return (op_add);
		case '-':
			return (op_sub);
		case '*':
			return (op_mul);
		case '/':
			return (op_div);
		case '%':
			return (op_mod);
	}
	return (NULL);
}
