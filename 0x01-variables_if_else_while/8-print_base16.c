#include <stdio.h>
/**
 * main-Unix
 *
 * Return: return = 0 (Success)
 */
int main(void)
{
	char ch;
	int n;

	ch = 'a';
	n = '0';

	while (n <= '9')
{
	putchar(n);
	n++;
}
	while (ch <= 'f')
{
	putchar(ch);
	ch++;
}
	putchar('\n');
	return (0);
}
