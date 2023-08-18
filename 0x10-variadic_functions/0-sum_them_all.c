#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  *sum_them_all - funstion that uses variadic argumnts
  *@n: integer count
  *Return: sum on success
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0, num;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
			sum = sum + num;
	}
	va_end(args);

	return (sum);
}
