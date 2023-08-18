#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - print numbers followed by a seperator
  *@separator: separator between numbers
  *@n: unsigned int
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num;
		va_start(args, n);

		if (n == 0)
		{
			va_end(args);
			return;
		}

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			return;
		}
		num = va_arg(args, int);
		printf("%d%s", num, i < n - 1 ? separator : "");
	}
	printf("\n");

	va_end(args);
}
