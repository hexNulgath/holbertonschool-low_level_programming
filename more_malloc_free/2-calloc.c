#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @size: size of each element
 * @nmemb: number of elements
 * Return: pointer to the reserved
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char * p;
	unsigned int i = 0, j = nmemb;
	if (nmemb == 0  || size == 0)
		return (NULL);
	p = malloc(nmemb * size * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < j)
	{
		p[i] = 0x00;
		i++;
	}
	return (p);
}
