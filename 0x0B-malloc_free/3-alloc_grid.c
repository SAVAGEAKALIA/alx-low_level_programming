#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
*
*
*
*
*/

int **alloc_grid(int width, int height)
{
	int i,j;

	int size = (width + height);
	char *s = malloc(sizeof(int) * size);

	if (s == NULL)
{
	return (NULL);
}

	if (width <=0 || height <= 0)
{
	return (NULL);
}

	for (i = 0; i < size; i++)
{
		for (j = 0; j < size; j++)
{
		_putchar(s[0]);
}
}
		return (0);
}
