#include "main.h"
/**
*print_rev - imprime en reversa
*@s: string
*
*Return: 0
*/

void print_rev(char *s)
{
	int begin, end = 0;

	while (*s != '\0')
{
	end++;
	s++;
}
	s--;

	for (begin = end; begin >= 0; begin--)
{
	_putchar(*s);
	s--;
}
	_putchar('\n');
}
