#include "main.h"
#include <stdio.h>

/**
*print_square - Print a square
*Prints a square
*@size: Data type
*This function Can only use _putchar to print. Use '#' to print square.
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
{
	_putchar('#');
}
}
	_putchar('\n');
}
}
