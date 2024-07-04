#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int i = min, j = 0;
	int *p;
	
	if (min > max)
		return (NULL);
	while (i < max)
	{
		i++;
		j++;
	}
	p = malloc((j + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
