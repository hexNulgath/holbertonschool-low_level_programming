#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: a array of pices and spaces
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int z = 0;

	while (z < 9)
	{
		while (i < 9)
		{
			_putchar(a[z][i]);
			i++;
		}
		i = 0;
		z++;
		if (z < 8)
			_putchar('\n');
	}
}
