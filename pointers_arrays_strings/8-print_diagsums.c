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
	int sideL;
	int sideR;

	while (i < size)
	 {
		 sideL = sideL + *(a + i * size + i);;
		 sideR = sideR + *(a + i * size + size - i - 1);
		 i++;
	 }

	printf("%d, %d\n", sideL, sideR);
}
