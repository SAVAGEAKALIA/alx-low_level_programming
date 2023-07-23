#include "main.h"

/**
 * print_last_digit- check the code
 * @n: last digit
 * Return: Always 0.
 */


int print_last_digit(int n)
{
	int k;

	k = n % 10;

	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
