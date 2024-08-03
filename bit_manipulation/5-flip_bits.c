#include "main.h"
/**
 * flip_bits - number of difference of bits
 * @n: a decimal number
 * @m: a decimal number
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int bit_n, bit_m;

	for (i = 0; i < 64; i++)
	{
		bit_n = (n >> i) & 1;
		bit_m = (m >> i) & 1;
		if (bit_n != bit_m)
		count++;
	}
	return (count);
}
