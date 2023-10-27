#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - print  first 98 Fibonacci numbers
  *Return: 0 on success
  */


int main(void)
{
	unsigned long long nth_term = 0;
	unsigned long long t1 = 1, t2 = 2;
	unsigned long long n;


	printf("%llu, %llu", t1, t2);

	for (n = 2; n < 98; n++)
	{
		nth_term = t1 + t2;
		printf(", %llu", nth_term);
		t1 = t2;
		t2 = nth_term;
	}
	printf("\n");
	return (0);
}
