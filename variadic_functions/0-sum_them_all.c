#include "variadic_functions.h"
/**
 * um_them_all- sum all int parameters
 * @n: a serie of int
 * return: the sum of the params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value = 0;

	va_start(args, n);

	for (i = 0; i < n ; i++)
		value += va_arg(args, int);
	va_end(args);
	return (value);
}
