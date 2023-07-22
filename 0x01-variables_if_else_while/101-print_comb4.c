#include <stdio.h>
/**
* main - three didits
*
* Return: return = 0 (Saviour Success)
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
{
	for (j = i + 1; j <= 9; j++)
{
	for (k = j + 1; k <= 9; k++)
{
	putchar(i);
	putchar(j);
	putchar(k);
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
