#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: acepts a int
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r);
	return (r);
}
