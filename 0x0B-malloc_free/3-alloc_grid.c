#include "main.h"

/**
* alloc_grid - function that returns 
* a pointer to a 2 dimensional array of integers.
* @width: width of grid
* @height: height of grid
* Return: pointer to grid
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j, fr_up;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				for (fr_up = 0; fr_up < i; fr_up++)
					free(grid[fr_up]);
				free(grid);
				return (NULL);
			}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
