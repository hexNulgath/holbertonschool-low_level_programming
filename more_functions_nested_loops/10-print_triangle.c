#include "main.h"
/**
 * print_triangles - prints a triangle
 * @size: number of base
 * Return: void
 */

void print_triangle(int size)
{
	int number = 0;
	int space = size -1;
	int i = space;
	int f = 0;
	int r = size;
	int t = 0;

	while (number < size)
	{
		while (i > 0 )
		{
			_putchar(' ');
			i--;
		}
			space--;
			i = space;	
			f = size - r;
			while (f >= t)
		{
			_putchar('#');
			t++;
		}
			_putchar('\n');
		t = 0;
		number++;
		r--;
	}
}
