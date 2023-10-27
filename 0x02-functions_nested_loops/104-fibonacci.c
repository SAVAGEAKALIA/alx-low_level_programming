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


	nth_term = t1 + t2;

	printf("%d", t2);

	for (n = 3; n <= 98; n++)
	{
		t1 = t2;
		t2 = nth_term;
		nth_term = t1 + t2;
		printf(", %lu", nth_term);
	}
	printf("\n");
	return (0);
}
