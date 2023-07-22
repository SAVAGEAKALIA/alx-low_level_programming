#include <stdio.h>
/**
* main - two two digits
*
* Return: return = 0 (sucess)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 100; i++)
{
	for (j = 0; j <= 100; j++)
{
	putchar((i /  10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');

	putchar((j / 10) + '0');
	putchar((j % 10) + '0');

	if (i != 99 || j != 98)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
