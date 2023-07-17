#include <stdio.h>
/**
* main - Lower and Upper
*
* Return: return = 0 (success)
*/
int main(void)
{
	char ch, hc;

	ch = 'a';
	hc = 'A';

	while (ch <= 'z')
{
	putchar(ch);
	ch++;
}

	while (hc <= 'Z')
{
	putchar(hc);
	hc++;
}
	putchar('\n');
	return (0);
}
