#include <stdlib.h>

/**
 * free_grid - free a 2d array dynamically allocated memory
 *
 * @grid: the array variable
 * @height: the height
 *
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
