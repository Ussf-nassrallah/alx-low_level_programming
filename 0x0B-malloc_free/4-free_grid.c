#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @height: grid height
 * @grid: grid will be frees
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int index;

	index = 0;

	while (index < height)
	{
		free(grid[index]);

		index++;
	}

	free(grid);
}
