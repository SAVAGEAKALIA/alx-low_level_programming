#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - print  first 98 Fibonacci numbers
  *Return: 0 on success
  */


int main(void)
{
	unsigned int nth_term = 0;
	unsigned int t1 = 1, t2 = 2;
	unsigned int n;


	printf("%d, %d", t1, t2);

	for (n = 2; n < 98; n++)
	{
		nth_term = t1 + t2;
		printf(", %d", nth_term);
		t1 = t2;
		t2 = nth_term;
	}
	printf("\n");
	return (0);
}
