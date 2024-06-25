#include "main.h"
/**
 * memset - fills a memory with a constant byte
 * @s: a pointer to memory to fill
 * @b: byte for filling
 * @n: number of bytes to fill
 * Return: a pointer to memory area 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int unsigned i = 0;

	for (i < n)
		s[i] = b;
	return (s);
}
