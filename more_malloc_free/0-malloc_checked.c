#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: memory to allocate
 * Return: pointer to the reserve
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
