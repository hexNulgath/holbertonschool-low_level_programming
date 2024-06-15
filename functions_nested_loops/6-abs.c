#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @n: acepts a int
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
