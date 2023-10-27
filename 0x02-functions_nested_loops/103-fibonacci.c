#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - function that prints Liber Abbaci numbers
  *Return: 0 on success
  */

int main(void)
{
	int nth_term = 0;
	int t1 = 0, t2 = 1;
	int n, sum = 0;

	nth_term = t1 + t2;

	for (n = 0; nth_term <= 4000000; n++)
	{
		if ((nth_term / 2) && ((nth_term % 2) == 0))
		{
			sum += nth_term;
		}
		t1 = t2;
		t2 = nth_term;
		nth_term = t1 + t2;
	}
	printf("%d\n", sum);
	return (0);
}
