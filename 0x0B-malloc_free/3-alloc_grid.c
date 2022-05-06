#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2d integer grid
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid or null
 */
int **alloc_grid(int width, int height)
{
	int **all, i, j;

	if (height < 1 || width < 1)
	{
		return (NULL);
	}
	all = malloc(sizeof(int *) * height);
	if (all == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		all[i] = malloc(sizeof(int) * width);
		if (all[i] == NULL)
		{
			free(all);
			for (j = 0; j <= i; j++)
				free(all[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			all[i][j] = 0;
		}
	}
	return (all);
}
