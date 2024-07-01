#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: size of width
 * @height: size of height
 * Return: NULL or a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int z = 0;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < height)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{ free(p)
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (z < width)
		{
			p[i][z] = 0;
			z++;
		}
		z = 0;
		i++;
	}
	return (p);
}
