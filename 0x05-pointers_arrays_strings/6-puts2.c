#include "main.h"
#include <string.h>
/**
*puts2 - function to be printed
*
*@str: data type
*
*/

void puts2(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i < j; i += 2)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
