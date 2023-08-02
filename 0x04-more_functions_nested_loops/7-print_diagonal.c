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

	for (i = 1; i <= n; i++)
	{
	for (j = 1; j <= i; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
	if (n <= 0)
	_putchar('\n');
	else
	_putchar('\n');
	}
}
