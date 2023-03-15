#include "main.h"

/**
 * free_grid - functions that frees given grid
 *
 * @grid: array to be freed
 * @height: height of the array
 * Return: nothing
 */
void	free_grid(int **grid, int height)
{
	int	iter;

	iter = 0;
	while (iter < height)
	{
		free(grid[iter]);
		iter++;
	}
	free(grid);
}
