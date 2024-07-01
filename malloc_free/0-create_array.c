#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: a char to initalize
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = malloc((size) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (i <= size)
	{
		p[i] = c;
		i++;
	}

	return (p);

}
