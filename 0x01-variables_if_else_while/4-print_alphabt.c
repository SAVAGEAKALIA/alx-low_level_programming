#include <stdio.h>
/**
* main - Except q and e
*
* Return: return = 0 (success)
*/


int main(void)
{
	char ch, e, q;

	ch = 'a';
	e = 'e';
	q = 'q';


	while (ch <= 'z')
{
	if (ch != e && ch != q)
	putchar(ch);
	ch++;
}
	putchar('\n');
	return (0);
}
