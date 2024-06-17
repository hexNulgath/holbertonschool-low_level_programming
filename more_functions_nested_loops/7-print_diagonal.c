#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: number of \
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int r = 0;

	while (i < n)
	{
		if (n > 1)
			while (r < i)
			{
				_putchar(' ');
				r++;
			}
		_putchar(92);
		_putchar('\n');
		i++;
		r = 0;
	}
	if (n <= 0)
		_putchar('\n');
}
