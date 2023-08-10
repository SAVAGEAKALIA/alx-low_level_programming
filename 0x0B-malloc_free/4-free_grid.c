#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*free_grid - free memory alocation
*@grid: grid value
*@height: height value
*Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
	return;

	for (i = 0; i < height; i++)
{
	if (grid != 0)
{
	free(grid[i]);
}
}
	free(grid);
}
