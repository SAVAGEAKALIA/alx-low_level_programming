#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - print  first 98 Fibonacci numbers
  *Return: 0 on success
  */


int main(void)
{
	int nth_term = 0;
	int t1 = 0, t2 = 1;
	int n;


	printf("%d, %lu", t1, t2);

	for (n = 2; n <= 98; n++)
	{
		nth_term = t1 + t2;
		printf(", %d", nth_term);
		t1 = t2;
		t2 = nth_term;
	}
	printf("\n");
	return (0);
}
