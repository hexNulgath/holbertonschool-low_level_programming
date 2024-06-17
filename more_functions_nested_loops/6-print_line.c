#include "main.h"
/**
 * print_line - prints a line
 * @n: number of -
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('-');
		i++;
	}
	_putchar('\n');
}
