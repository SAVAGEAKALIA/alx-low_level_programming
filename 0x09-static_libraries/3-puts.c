#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: string print
 */
void _puts(char *s)
{
	int i, lenght = 0;

	while (s[lenght] != '\0')
	lenght++;

	for (i = 0; i < lenght; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
