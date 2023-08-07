#include "main.h"

/**
* free_grid - function that frees
* a 2 dimensional grid
* @grid: grid created with alloc_grid
* @height: height of grid
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);


	free(grid);
}
