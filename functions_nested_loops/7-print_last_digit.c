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
		n = n * -1;
	}
	r = n % 10;
	_putchar(r + 48);
	return (r);
}
