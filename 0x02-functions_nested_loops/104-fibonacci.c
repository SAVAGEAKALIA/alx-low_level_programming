#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - print  first 98 Fibonacci numbers
  *Return: 0 on success
  */


int main(void)
{
	unsigned long nth_term = 0;
	unsigned long t1 = 1, t2 = 2;
	unsigned long n;


	printf("%lu, %lu", t1, t2);

	for (n = 0; n < 1; n++)
	{
		nth_term = t1 + t2;
		printf(", %lu", nth_term);
		t1 = t2;
		t2 = nth_term;
	}
	/*printf("\n");*/
	return (0);
}
