#include "main.h"
#include <stdio.h>

/**
*print_line - lines
*
*@n: data type
*Return: 0 on success
*/


void print_line(int n)
{

	int i;

	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	_putchar('\n');
	else
	_putchar('\n');
}
