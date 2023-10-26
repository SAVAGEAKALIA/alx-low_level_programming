#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - program that prints sum mulitple
  */

int main(void)
{
	int result = 0;
	int j = 0, n = 1024;

	for (j = 0; j < n; j++)
	{
		if ((j / 3) || (j / 5))
		{
			if (((j % 3) == 0) || ((j % 5) == 0))
			{
				/*printf("%d\n", j);*/
				result += j;
			}
		}
	}
	printf("%d\n", result);

	return (0);
}
