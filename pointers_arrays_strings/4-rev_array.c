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
	int z = n - 1;
	int temp = 0;
	º
	while (i < z)
	{
		temp = a[i];
		a[i] = a[z];
		a[z] = temp;
		i++;
		z--;
	}
}
