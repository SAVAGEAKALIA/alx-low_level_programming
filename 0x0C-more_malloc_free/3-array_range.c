#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - function for array
 *@min: Data type
 *@max: Data type
 *Return: values
 */


int *array_range(int min, int max)
{
	int i, size;
	int *grid;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	grid = malloc(sizeof(int) * size);

	if (grid == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		grid[i] = min + i;
	}

	return (grid);
}
