#include "main.h"

/**
 * *alloc_grid - allocates grid
 *
 * @width: number of coloms
 * @height: number of rows
 *
 * Return: pointer to array if success
 *         NULL if width of hight is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
