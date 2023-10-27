#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - print  first 98 Fibonacci numbers
  *Return: 0 on success
  */


int main(void)
{
	size_t nth_term = 0;
	size_t t1 = 0, t2 = 1;
	size_t n;


	nth_term = t1 + t2;

	printf("%lu", t2);

	for (n = 6; n <= 98; n++)
	{
		t1 = t2;
		t2 = nth_term;
		nth_term = t1 + t2;
		printf(", %lu", nth_term);
	}
	printf("\n");
	return (0);
}
