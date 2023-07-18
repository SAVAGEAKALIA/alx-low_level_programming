#include <stdio.h>
/**
* main - using only putchar
*
* Return: return = 0 (success)
*/
int main(void)
{
	int a;

	a = '0';

	while (a <= '9')
{
	putchar(a);
	a++;
}
	putchar('\n');
	return (0);
}
