#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: acepts a int
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = n * -1  % 10;
	}
	else
	{
		r = n % 10;
	}
	_putchar(r + 48);
	return (r);
}
