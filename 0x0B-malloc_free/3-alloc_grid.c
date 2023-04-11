#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - f that returns a pointer to a 2 dimensional array of int
 * @width: grid width
 * @height: grid height
 * Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int x, y;

	int **output;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		*(output + y) = malloc(sizeof(int) * width);

		for (x = 0; x < width; x++)
		{
			output[y][x] = 0;
		}
	}

	return (output);
}
