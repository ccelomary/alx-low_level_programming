#include "main.h"

/**
 * alloc_grid - function that returns allocated 2d array
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2d array
 */
int	**alloc_grid(int width, int height)
{
	int	**grid;
	int	iter;
	int	witer;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	iter = 0;
	while (iter < height)
	{
		grid[iter] = malloc(sizeof(int) * width);
		if (!grid[iter])
		{
			while (--iter >= 0)
				free(grid[iter]);
			free(grid);
			return (NULL);
		}
		witer = 0;
		while (witer < width)
		{
			grid[iter][witer] = 0;
			witer++;
		}
		iter++;
	}
	return (grid);
}
