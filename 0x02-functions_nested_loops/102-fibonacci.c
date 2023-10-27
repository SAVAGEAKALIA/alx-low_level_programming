#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - function to print Fibonacci
  *Return: 0 on success
  */

int main(void)
{
	int nth_term = 0;
	int t1 = 0, t2 = 1;
	int n = 0;

	printf("%d", t2);

	nth_term = t1 + t2;

	for (n = 0, n <= 50, n++)
	{
		t1 = t2;
		t2 = nth_term
		nth_term = t1 + t2;
		printf(", %d", nth_term);
	}
	printf("\n");
	return (0);
}
