#include "main.h"

/**
*more_numbers - multiple times
*
*
*Return: 0 on success
*/

void more_numbers(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
{
	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
}
