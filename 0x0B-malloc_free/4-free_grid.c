#include "main.h"

/**
 * free_grid - deallocates memory previously allocated for alloc_grid
 * @grid: address of the grid to be freed
 * @height: number of rows in the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
