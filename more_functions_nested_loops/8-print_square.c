#include "main.h"
/**
 * print_square - prints a square
 * @size: number of side
 * Return: void
 */

void print_square(int size)
{
	int x = 0;
	int y = 0;

	while (y < size)
	{
		while (x < size)
		{
			_putchar('#');	
			x++;
		}
		_putchar('\n');
		y++;
		x = 0;
	}
	_putchar('\n');
}
