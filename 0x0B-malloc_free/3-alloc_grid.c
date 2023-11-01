#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * @grid: address of the grid
 *
 * Return: NULL when it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}free(grid);
			return (NULL);
		}
		j = 0;
		while(j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	retunr (grid);

}

