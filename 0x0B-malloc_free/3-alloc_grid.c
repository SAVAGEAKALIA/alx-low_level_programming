#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*alloc_grid - function to print 2d array
*@width: column of array
*@height: row of array
*
*Return: grid on success
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

/*Check for if width and height is 0 or negative*/
	if (width <= 0 || height <= 0)
	return (NULL);

/* allocate memmory for each row for pointer to pointer of arrays of integer*/
	grid = (int **)malloc(sizeof(int *) * height);

/*Check if grid is NULLand terminate Code by returning NULL*/

	if (grid == 0)
	return (NULL);

	for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);

/* Check if grid[i] is equal to zero(0) */

	if (grid[i] == 0)
{
/* Frees memmory for gri and grid[i] before returning NULL */

	for (j = 0; j < i; j++)
	{
		free(grid[j]);
	}
	free(grid);
	return (NULL);
}
}
	for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
{
	grid[i][j] = 0;
}
}	return (grid);
}
