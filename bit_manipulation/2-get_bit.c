#include "main.h"
/**
 * get_bit - prints binary
 * @n: a decimal number
 * @index: bit you want to get
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = 1UL << index;
	if (n & i)
		return (1);
	else
		return (0);
	return (-1);
}
