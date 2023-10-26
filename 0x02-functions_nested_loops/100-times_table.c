#include "main.h"
#include <stdio.h>
/**
  *print_times_table - function to print times table
  *@n: variable passed
  *Return: does not return, void function
  */

void print_times_table(int n)
{
	int result;
	int j = 0, i = 0;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = j * i;
			if (j == 0)
			{
			printf("%d", result);
			}
			else
			{
			if (result < 10)
			{
			printf(",   %d", result);
			}
			else if (result > 10 && result < 100)
			{
			printf(",  %2d", result);
			}
			else
			printf(", %3d", result);
			}
		}
		printf("\n");
	}
	}
}
