#include "main.h"
/**
 * reverse_array - reverses a array of int
 * @a: int to reverse
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n-i];
		a[n-i] = temp;
		i++;
	}
}
