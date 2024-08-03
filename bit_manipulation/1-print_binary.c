#include "main.h"
/**
 * print_binary - prints binary
 * @n: a decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = 1UL << 32;
	while ((n & i) == 0 && i > 1)
		i = i >> 1;
	for (; i > 0; i = i >> 1)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
