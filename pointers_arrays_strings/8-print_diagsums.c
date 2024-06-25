#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: an int array
 * @size: side of the square
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	long int sideL = 0;
	long int sideR = 0;

	while (i < size)
	{
		sideL += *(a + i * size + i);
		sideR += *(a + i * size + size - i - 1);
		i++;
	}

	printf("%d, %d\n", sideL, sideR);
}
