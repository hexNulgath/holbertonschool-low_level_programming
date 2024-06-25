#include "main.h"
/**
 * _memcpy - copy a memory area
 * @dest: destination of copy
 * @src: from to copy
 * @n: number of bytes to copy
 * Return: a memory pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
