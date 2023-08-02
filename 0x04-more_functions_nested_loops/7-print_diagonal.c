#include "main.h"
#include <stdio.h>

/**
*print_diagonal - diagonal
*
*@n: data type
*Return: 0 on success
*/


void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 0; i < n; i++)
{
	for (j = 0; j < n; j++)
		{
		if (j == i)
		_putchar('\\');
		else if (j < i)
		_putchar(' ');
		}
		_putchar('\n');
}
}
}
