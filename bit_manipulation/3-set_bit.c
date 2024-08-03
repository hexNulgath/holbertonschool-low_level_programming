#include "main.h"
/**
 * set_bit - set a bit
 * @n: a decimal number
 * @index: bit you want to set
 * Return: value of the bit at index index or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= 64)
		return (-1);
	i = 1UL << index;
	*n = *n | i;
	return (1);
}
