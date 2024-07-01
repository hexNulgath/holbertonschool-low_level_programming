#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free array
 * @grid: grid array
 * @height: size of height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = height;

	while (i > 0)
		free(grid[--i]);
	free(grid);
}
