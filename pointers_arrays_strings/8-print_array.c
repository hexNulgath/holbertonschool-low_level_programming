#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elemts of an array
 * @a: a int array
 * @n: int of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	n = n - 1;
	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	if (i == n)
		printf("%d", a[i]);
	printf("\n");
}
