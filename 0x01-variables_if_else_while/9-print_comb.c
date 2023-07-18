#include <stdio.h>
/**
 * main-Unix
 *
 * Return: return = 0 (Success)
 */
int main(void)
{
	int n;

	n = '0';

	while (n <= '9')

{
	putchar(n);
	if (n <= '8')
{
	putchar(',');
	putchar(' ');
	}
	n++;
	}

	putchar('\n');
	return (0);
}
